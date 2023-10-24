#!/bin/bash

echo "Compiling graphical simulation..."
g++ lrc.cc -o lrc -lGL -lGLU -lglut -lm
./lrc & 

echo "Simulation running."
echo "Controls:"
echo ""
echo "x -> inc x"
echo "v -> inc v"
echo "a -> inc a"
echo "q -> quit "

