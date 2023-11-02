#!/bin/bash

#Compile C program
gcc JohnSoupir-Assignment04.c -o bessel

#Calculate Bessel
echo "Calculating Bessel J0, J1, J2"
./bessel 0 > 0.dat
./bessel 1 > 1.dat
./bessel 2 > 2.dat

#Plot results
gnuplot JohnSoupir-Assignment04.gnuplot -p

#Clean up data files
rm *.dat bessel
