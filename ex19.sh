#!/bin/bash

echo -n "Enter an integer: "
read num

# Check if the input is a valid integer
re='^[0-9]+$'
if ! [[ $num =~ $re ]] ; then
   echo "Error: Not a valid integer" >&2; exit 1
fi

# Reverse the digits
reversed=$(echo $num | rev)

echo "Reversed number: $reversed"
