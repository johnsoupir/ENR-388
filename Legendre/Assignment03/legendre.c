#include <stdio.h>
#include <stdlib.h>

#define P0 1
#define P1 x
#define P2 (1.0/2)*(3*x*x - 1)
#define P3 (1.0/2)*(5*x*x*x - 3*x)
#define P4 (1/8.0)*(35*x*x*x*x - 30*x*x + 3)
#define P5 (1.0/8.0)*(63*x*x*x*x*x - 70*x*x*x + 15*x)
#define P6 (1.0/16.0)*(231*x*x*x*x*x*x - 315*x*x*x*x + 105*x*x - 5)
#define P7 (1.0/16.0)*(429*x*x*x*x*x*x*x - 693*x*x*x*x*x + 315*x*x*x - 35*x)
#define P8 (1.0/128.0)*(6435*x*x*x*x*x*x*x*x - 12012*x*x*x*x*x*x + 6930*x*x*x*x - 1260*x*x + 35)
#define P9 (1.0/128.0)*(12155*x*x*x*x*x*x*x*x*x - 25740*x*x*x*x*x*x*x + 18018*x*x*x*x*x - 4620*x*x*x + 315*x)
#define P10 (1.0/256.0)*(46189*x*x*x*x*x*x*x*x*x*x - 109395*x*x*x*x*x*x*x*x + 90090*x*x*x*x*x*x - 30030*x*x*x*x + 3465*x*x - 63)

#define A (1 - x*x)
#define B (2 * x)
#define C (s * (s + 1))

double dx = 0.001;
double dy = 0.00;
double y = -1.00;

double initialX = -1.00;
double numerical = 0;
double finalX = 1.00;
double initialY[] = {-1,1};
int s;

int usage(char * arg0);

int main(int argc, char **argv)
{
    if (argc != 2) return(usage(argv[0]));

    y = (atoi(argv[1])%2 != 0) ? initialY[0] : initialY[1];
    s = atoi(argv[1]);

    for (double x = (dx - 1); x <= finalX; x += dx)
    {
        dy += ((B*dy - C*y) / A) * dx;
        y += dy*dx;
        numerical = P4;

        fprintf(stdout, "%f\t%f\t%f\t%f\n", x, y, numerical, dy);
    }

    return 0;
}

int usage(char * arg0)
{
    fprintf(stderr, "Usage: %s <n>\n", arg0);
    fprintf(stderr, "Where n is the degree of the Legendre polynomial.\n");
}
