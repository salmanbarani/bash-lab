#!/bin/bash

# Read space-separated input and store fields in the array (IFS=Internal Field Separator)
read -r -a operation

# Perform arithmetic on the first three elements of the array and store the result in a variable
result=$((operation[0] + operation[1] + operation[2]))

# Print the result of the arithmetic operation
echo "$result"
