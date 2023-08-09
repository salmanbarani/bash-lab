#!/bin/bash
#!/bin/bash

# countries=()
# i=0
# while read -r line; do
#     countries[i]=$line
#     ((i++))
# done

# for ((j = 3; j <= 7; j++)); do
#     echo -n "${countries[j]} "
# done

declare -a arr=($(cut -d $'\n' -f 1-))
echo ${arr[@]:3:5}
