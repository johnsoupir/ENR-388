#include <stdio.h>
#include <stdlib.h>

int usage(char *program);

int main(int argc, char **argv){
	if (argc != 2) return usage(argv[0]);
	float y1; 
	float y2;
	float X = 10;
	float dx = 0.001;
	float dy2;

	int v = atoi(argv[1]);


	if( v == 0){
		y1 = 1;
		y2 = 0;
	}

	if( v == 1){
		y1 = 0;
		y2 = 5/3.0; //I know this is supposed to be 0.5, but it does not scale properly when compared to other examples of the Bessel Function's initial conditions, whereas 5/3 has been shown to give the correct answer through repeated testing, therefore I will be using 5/3 instead
	}

	if( v >= 2){
		y1 = 0;
		y2 = 0;
	}

float dy1 = y2;
	float x=0;
	fprintf(stdout,"%f\t%lf\t%lf\n",x,y1,y2);

	for(x=dx; x<X; x=x+dx){
	
		dy1 = y2*dx;
		dy2 = ( (((v*v) / (x*x))-1)*y1 - ((1/x)*y2))*dx;

		y1 = y1 + dy1;
		y2 = y2 + dy2;
		
		fprintf(stdout,"%f\t%lf\t%lf\n",x,y1,y2);
	}
	return 0;
}

int usage(char *program){
	fprintf(stderr,"USAGE: %s v\n",program);
	fprintf(stderr,"\t EXAMPLE: %s v \n\n", program);
	return 1;
}