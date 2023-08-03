#!/bin/bash

declare -a arr=($(cut -d $'\n' -f 1-))
echo "${arr[*]} ${arr[*]} ${arr[*]}"
