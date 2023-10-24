set term x11
set title "LRC and mass spring"

plot "data.dat" using 1:2 with line lw 2 t "x",\
"data.dat" using 1:3 with line lw 2 t "v",\
"data.dat" using 1:4 with line lw 2 t "a"

