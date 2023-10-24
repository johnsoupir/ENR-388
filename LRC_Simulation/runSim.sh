#!/bin/bash

#Compile the C program
gcc sim.c -o sim

#Run program and save output
./sim $@ > data.dat

#GNUPlot the results
#gnuplot plot.gnuplot
gnuplot -p plot.gnuplot

#Show output plot
open resultsPlot.png
