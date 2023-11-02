set term x11

set xrange [0:10]
set yrange [-1:1]

plot "0.dat" u 1:2 w l,\
"1.dat" u 1:2 w l,\
"2.dat" u 1:2 w l,\
"3.dat" u 1:2 w l,\
"4.dat" u 1:2 w l,\
"5.dat" u 1:2 w l,\
"6.dat" u 1:2 w l,\
"7.dat" u 1:2 w l,\
"8.dat" u 1:2 w l,\
"9.dat" u 1:2 w l
