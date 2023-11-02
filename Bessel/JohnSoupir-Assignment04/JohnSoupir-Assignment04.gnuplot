set term x11

set title "Bessel Computational vs. Numerical "
set xrange [0:10]
set yrange [-1:1]

plot "0.dat" u 1:2 w l t "J0",\
     "1.dat" u 1:2 w l t "J1",\
     "2.dat" u 1:2 w l t "J2",\
     besj0(x) w p t "J0 - GNUPlot",\
     besj1(x) w p t "J1 - GNUPlot"
