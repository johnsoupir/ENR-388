#include <stdio.h>
#include <stdlib.h>

int usage(char * arg0);

int main(int argc, char **argv)
{
	if (argc != 2) return usage(argv[0]);

	double y1, y2; 
	double finalX = 10;
	double dx = 0.0001;
	int v = atoi(argv[1]);

    //Switch to determine initial values
    switch (v)
    {
        case 0: //For v 0th
		y1   = 1.0;
		y2   = 0.0;
            break;
    
        case 1: //For v 1st
		y1   = 0.0;
		y2   = 0.5; 
            break;
    
        default: //For any other input, make it zero
            y1 = 0.0;
            y2 = 0.0;
            break;
    }

    //Start at small x, go until 10.
	for(double x = dx; x <= finalX; x += dx)
    {
		y1 += y2*dx;
		y2 += ( (((v*v) / (x*x)) - 1)*y1 - ((1/x)*y2) ) * dx;
		fprintf(stdout,"%lf\t%lf\t%lf\n",x,y1,y2);
	}
	
    return 0;
}

int usage(char * arg0)
{
	fprintf(stderr,"USAGE: %s v\n",arg0);
	fprintf(stderr,"\t EXAMPLE: %s 1 \n", arg0);
	return 1;
}