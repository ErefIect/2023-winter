#!/usr/bin/env bash
for dir in $(ls -d */); do
    cd $dir && make && cd ..
done

