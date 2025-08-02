#!/bin/bash
mkdir -p build
cd build
qmake ../Calculator.pro
make
