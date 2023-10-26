set term x11
set yrange [-1:1]
set xrange [-1:1]
set title "Legendre Polynomials"
set xlabel "X-axis"
set ylabel "Y-axis"
set key outside

set style line 1 lc rgb 'orange' lt 1 lw 4
set style line 2 lc rgb 'blue' pt 7 ps 1.5

plot "0.dat" u 1:2 w l title 'P0',\
"1.dat" u 1:2 w l title 'P1N',\
"2.dat" u 1:2 w l title 'P2N',\
"3.dat" u 1:2 w l title 'P3N',\
"4.dat" u 1:3 every 10 w p ls 2 title 'P4M',\
"4.dat" u 1:2 w l ls 1 title 'P4N',\
"5.dat" u 1:2 w l title 'P5N',\
"6.dat" u 1:2 w l title 'P6N',\
"7.dat" u 1:2 w l title 'P7N',\
"8.dat" u 1:2 w l title 'P8N',\
"9.dat" u 1:2 w l title 'P9N'