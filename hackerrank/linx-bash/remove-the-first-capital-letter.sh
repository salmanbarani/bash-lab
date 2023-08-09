#!/bin/bash

declare -a countries=($(cut -d $'\n' -f 1-))

count="${#countries[@]}"

for ((i=0; i<$count; i++)); do
	if [[ "${countries[i]:0:1}" =~ [A-Z] ]]; then
		countries[$i]=".${countries[$i]:1}"
	fi
done
echo "${countries[@]}"
