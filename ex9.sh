#!/bin/bash

# Function to calculate the sum
calculate_sum() {
    local n=$1
    local sum=0

    for ((i = 12; i <= n; i += 10)); do
        sum=$((sum + i))
    done

    echo $sum
}

# Get user input for n
read -p "Enter the value of n: " n_value

# Call the function with the user input
result=$(calculate_sum $n_value)

# Display the result
echo "The sum of the series is: $result"
