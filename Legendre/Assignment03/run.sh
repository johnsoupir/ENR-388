#!/bin/bash

gcc legendre.c -o legendre


./legendre 0 > 0.dat
./legendre 1 > 1.dat
./legendre 2 > 2.dat
./legendre 3 > 3.dat
./legendre 4 > 4.dat
./legendre 5 > 5.dat
./legendre 6 > 6.dat
./legendre 7 > 7.dat
./legendre 8 > 8.dat
./legendre 9 > 9.dat

gnuplot -p all.gnuplot

rm *.dat
