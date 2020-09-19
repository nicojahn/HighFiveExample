#/bin/bash
g++ -g -I./HighFive/include -I/usr/include/hdf5/serial/ main.cpp -o main -lhdf5_serial --std=c++11
