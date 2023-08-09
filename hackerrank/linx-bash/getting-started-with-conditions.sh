#!/bin/bash

read std

if [[ $std == 'Y' || $std == 'y' ]]; then
    echo "YES"
else
    echo "NO"
fi
