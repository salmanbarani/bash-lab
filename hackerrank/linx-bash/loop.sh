#!/bin/bash

count=1
while [ $count -le 99 ]
do 
        if [ $((count %2)) -eq 1 ]
        then
            echo $count
        fi
        
        ((count++))
done