set term x11

set title "Plot of step driven RC circuit"
set xlabel "Time"
set ylabel "V or I"
set key outside
set grid

plot "data.dat" u 1:2 w l lw 2 t "Current",\
     "data.dat" u 1:3 w l t "Source Voltage",\
     "data.dat" u 1:4 w l t "Capacitor Voltage"
