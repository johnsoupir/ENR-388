
./b 0 $@ > 0.dat
./b 1 $@ > 1.dat
./b 2 $@ > 2.dat
./b 3 $@ > 3.dat
./b 4 $@ > 4.dat
./b 5 $@ > 5.dat
./b 6 $@ > 6.dat
./b 7 $@ > 7.dat
./b 8 $@ > 8.dat
./b 9 $@ > 9.dat

gnuplot all.gnuplot -p
