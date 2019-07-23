#!/bin/bash

echo "Compiling \"$1/$2.cpp...\""
g++ -o ./out/$2 $1/$2.cpp
echo "Compile end, input anything"
./out/$2
