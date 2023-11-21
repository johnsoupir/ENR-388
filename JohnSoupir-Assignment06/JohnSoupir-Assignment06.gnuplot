set term png size 800, 600
set key outside
set title "Plot of y'' + y' = x^{3}"
set ylabel "y"
set xlabel "x"
set grid


plot "data.dat" u 1:2 w l t "Numerical"
