#!/bin/bash

echo "Enter an integer number:"
read number

# Check if the input is a valid integer
if ! [[ $number =~ ^[0-9]+$ ]]; then
  echo "Invalid input. Please enter a valid integer."
  exit 1
fi

# Convert the number to a string
number_str="$number"

echo "Digits of the number $number are:"

# Iterate through each character in the string
for (( i=0; i<${#number_str}; i++ )); do
  digit="${number_str:i:1}"
  echo "$digit"
done
