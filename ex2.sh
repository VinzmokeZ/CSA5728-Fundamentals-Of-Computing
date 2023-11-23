#!/bin/bash

# Get the limit 'n' from the user
read -p "Enter the value of n: " n

# Check if 'n' is a positive integer
if [[ ! "$n" =~ ^[1-9][0-9]*$ ]]; then
    echo "Please enter a positive integer."
    exit 1
fi

# Generate even number series from 2 to n
echo "Even number series from 2 to $n:"
for ((i = 2; i <= n; i += 2)); do
    echo "$i"
done
