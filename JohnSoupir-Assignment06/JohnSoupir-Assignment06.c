#include <stdio.h>
#include <stdlib.h>

double x  = 0;
double y  = 1;
double dy = 0;
double dx = 0.0001;
    
int main()
{
    for (x = 0; x <= 2; x += dx) 
    {
        dy += (x*x*x - y) * dx;
        y += dy*dx;
        printf("%lf\t%lf\t%lf\n", x, y, dy);
    }
    return 0;
}