#!/bin/bash

# Function to sum up the digits of a number
sum_digits() {
  local number=$1
  local sum=0

  while [ $number -gt 0 ]; do
    digit=$((number % 10))
    sum=$((sum + digit))
    number=$((number / 10))
  done

  echo $sum
}

# Example usage
read -p "Enter an integer number: " input_number

# Check if the input is a valid integer
if [[ $input_number =~ ^[0-9]+$ ]]; then
  result=$(sum_digits $input_number)
  echo "Sum of digits: $result"
else
  echo "Invalid input. Please enter a valid integer."
fi
