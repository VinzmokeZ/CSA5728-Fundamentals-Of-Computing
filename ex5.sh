#!/bin/bash

# Input: n - the upper limit of the series
n=$1

# Initialize sum to 0
sum=0

# Loop from 1 to n and add each number to the sum
for ((i=1; i<=n; i++)); do
    sum=$((sum + i))
done

# Print the result
echo "Sum of the series 1 + 2 + 3 + ... + $n is: $sum"
