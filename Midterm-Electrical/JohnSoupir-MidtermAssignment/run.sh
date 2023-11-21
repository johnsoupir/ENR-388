#!/bin/bash

#Compile
gcc JohnSoupir-MidtermAssignment.c -o sim

#Run
./sim 1 1 2 3 5 > data.dat

#Plot
gnuplot -p JohnSoupir-MidtermAssignment.gnuplot

#Clean up
rm data.dat sim
