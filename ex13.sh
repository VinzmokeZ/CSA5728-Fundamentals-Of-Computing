#!/bin/bash

# Get the value of n from the user
read -p "Enter the value of n: " n

# Initialize the sum variable
sum=0

# Loop through the numbers and add their cubes to the sum
for ((i = 1; i <= n; i++)); do
    cube=$((i * i * i))
    sum=$((sum + cube))
done

# Print the result
echo "The sum of the cubes of the first $n numbers is: $sum"
