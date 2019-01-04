#!/bin/sh
for mut_dir in $(ls -d mut/mut*); do
    echo $mut_dir
    cd $mut_dir
    nvcc tests.cu whattotest.cu -o test -lgtest -lgtest_main -lpthread
    ./test | tee "output.txt"
    cd ../..
done

egrep -lir --include=*.txt "FAILED" . > "failed.txt"
