#!/bin/bash

declare -a countries=($(cut -d $'\n' -f 1-))
echo "${#countries[@]}"
