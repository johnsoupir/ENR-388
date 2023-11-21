#include <stdio.h>
#include <stdlib.h>

/* Initial Conditions */
double Vc = 0;    
double i=0;          
double t = 0;      

/* Resistor and Capacitor values */
double R = 1;  
double C = 1; 

/* Pulse voltage, start and end times */
double Vpulse = 5;     
double tOn = 1;     
double tOff = 3;     
double T = 5;

double Vs;
double dv;
double dx = 0.001;  // Time step (dx)                                         
    
int usage(char * arg0);

int main(int argc, char **argv)
{

    if (argc != 6) return usage(argv[0]);

    R = atof(argv[1]);
    C = atof(argv[2]);
    tOn = atof(argv[3]);
    tOff = atof(argv[4]);
    Vpulse = atof(argv[5]);

    for (t = 0; t <= T; t += dx) {

        if (t >= tOn && t < tOff) {
            Vs = Vpulse;
        } else {
            Vs = 0.0;
        }

        dv = (Vs - Vc) / (R * C);
        i = C * dv; // i = C * dv/dt
        Vc += dv * dx;

        printf("%lf %lf %lf %lf\n", t, i, Vs, Vc);
    }

    return 0;
}

int usage(char * arg0)
{
    fprintf(stderr, "USAGE: %s R C Ta Tb V0\n", arg0);
    fprintf(stderr, "EXAMPLE: %s 1000 0.001 2 3 5\n", arg0);
    return 1;
}