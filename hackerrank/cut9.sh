#!/bin/bash

while read line; do
    echo $line | cut -d " " -f2-
done
