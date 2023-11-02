
./b 0 $@ > 0.dat
./b 1 $@ > 1.dat
./b 2 $@ > 2.dat

gnuplot plot.gnuplot -p
