#include<stdlib.h>
#include<stdio.h>
int usage(char * input);

double dx, a, v, v0, y, y0, x, T;

int main(int argc, char **argv)
{
    if (argc != 2) return usage(argv[0]);

    dx = atof(argv[1]);

    T=1;
    y = 1;
    v = 0;
    a = -2;


    for (x = 0; x < T; x += dx)
    {
        /*
        y0 = y;
        v0 = v;
        y = y0 + v0*dx;
        v = v0 + a*dx;
        */

        v += a * dx;
        y += v * dx;
        a = ( 2 * x * v - 2 * y) / (1 - x*x);
        printf("%lf\t%lf\t%lf\t%lf\n", x, y, v, a);
    }

    return 0;
}


int usage(char * input)
{
    fprintf(stderr, "Usage: %s dt \n", input);
    return 0;
}