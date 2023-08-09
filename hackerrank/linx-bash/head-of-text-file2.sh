#!/bin/bash

while read file; do
    echo $file >>file.txt
done
head -c 20 <file.txt
