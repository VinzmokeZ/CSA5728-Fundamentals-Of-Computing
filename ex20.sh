#!/bin/bash

# Read user input
echo "Enter an integer:"
read num

# Check if the input is a valid integer
if [[ ! $num =~ ^[0-9]+$ ]]; then
    echo "Error: Please enter a valid integer."
    exit 1
fi

# Check if the integer is odd or even
if (( num % 2 == 0 )); then
    echo "$num is even."
else
    echo "$num is odd."
fi
