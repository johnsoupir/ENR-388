#!/bin/bash

#Compile the C program
gcc sim.c -o sim

#Over damped
echo "Simulating over damped system"
./sim 1 6 5 0 1 0 5 0.01
gnuplot plot.gnuplot > overdamped.png

#Critially damped
echo "Simulating critically damped system"
./sim 1 4 4 0 1 0 5 0.01
gnuplot plot.gnuplot > critiallydamped.png

#Under damped
echo "Simulating under damped system"
./sim 1 1 3 0 1 0 5 0.01
gnuplot plot.gnuplot > underdamped.png

echo "All simulations complete. See png files for results."
