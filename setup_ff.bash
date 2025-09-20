#!/bin/bash

cd FloppyFloat
mkdir build
cd build
cmake ..
cmake --build . -j $(nproc)
