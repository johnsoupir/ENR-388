#include <stdio.h>
#include <stdlib.h>

//#define LOOPS 10
#define NUM_ARGS 9


double A = 1;
double B = 1;
double C = 1;
double dx = 0.1;
double endTime = 10;

double xPosition = 0;
double initialXPosition = 0;

double velocity = 1;
double initialVelocity = 0;

double acceleration = 0;

void main(int argc, char **argv)
{

    // if (argc != NUM_ARGS)

    A       = atof(argv[1]);
    B       = atof(argv[2]);
    C       = atof(argv[3]);
    endTime = atof(argv[4]);
    dx      = atof(argv[5]);
    
    
    for ( double t = 0; t <= endTime; t+=dx )
    {
        initialXPosition = xPosition;
        initialVelocity = velocity;

        xPosition = initialXPosition + initialVelocity*dx;
        velocity = initialVelocity + acceleration*dx;
        acceleration = (-B/A * initialVelocity) - (C/A * initialXPosition);

        fprintf(stderr, ">>> %3f | Position %4.2f \t Velocity %4.2f \t Acceleration %4.2f \n", t, xPosition, velocity, acceleration);
        fprintf(stdout, "%f %f %f %f\n", t, xPosition, velocity, acceleration);

    }



}