#!/usr/bin/env bash
for dir in $(ls -d */); do
    cd $dir && make clean && cd ..
done

for out in $(find . -iname "a.out"); do
    rm -f $out
done

