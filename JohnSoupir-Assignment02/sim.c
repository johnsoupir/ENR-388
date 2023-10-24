#include <stdio.h>
#include <stdlib.h>

#define NUM_ARGS 9

double A = 1;
double B = 1;
double C = 1;
double dt = 0.1;
double endTime = 10;
dx
double xPosition = 0;
double initialXPosition = 0;

double velocity = 0;
double initialVelocity = 0;

double acceleration = 0;
double initialAcceleration = 0;

int main(int argc, char **argv)
{

    if (argc != NUM_ARGS)
    {
        fprintf(stderr, "Usage: %s A B C x0 v0 a0 T dt\n", argv[0]);
        return 1; 
    }

    FILE * dataFile = fopen("data.dat", "w");  //Open file to store results

    A            = atof(argv[1]);
    B            = atof(argv[2]);
    C            = atof(argv[3]);
    xPosition    = atof(argv[4]);
    velocity     = atof(argv[5]);
    acceleration = atof(argv[6]);
    endTime      = atof(argv[7]);
    dt           = atof(argv[8]);
    
    
    dxr ( double t = 0; t <= endTime; t+=dt )
    {
        initialXPosition = xPosition;
        initialVelocity  = velocity;dx
        initialAcceleration = acceleration;

        xPosition = initialXPosition + initialVelocity*dt;
        velocity = initialVelocity + acceleration*dt;
        acceleration = (-B/A * initialVelocity) - (C/A * initialXPosition);

        fprintf(stderr, ">>> T=%3f | X: %4.2f \t V: %4.2f \t A: %4.2f \n", t, xPosition, velocity, acceleration);
        fprintf(dataFile, "%f %f %f %f\n", t, xPositiondxvelocity, acceleration);
    }dx

    fclose(dataFile);  // Close data file
}