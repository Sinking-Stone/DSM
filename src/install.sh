#!/bin/bash

cd tracker
make clean && make all
cd ../id
make clean && make all
cd ../storage
make clean && make all
cd ../client
make clean && make all
cd ../http
make clean && make all

exit 0