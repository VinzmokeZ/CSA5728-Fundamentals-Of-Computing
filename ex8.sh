#!/bin/bash

# Function to calculate the sum
calculate_sum() {
    local n=$1
    local sum=0

    for ((i = 1; i <= n; i++)); do
        if ((i % 2 == 0)); then
            # If the index is even, subtract the current value
            sum=$((sum - i))
        else
            # If the index is odd, add the current value
            sum=$((sum + i))
        fi
    done

    echo $sum
}

# Example usage
N=10  # You can replace this with your desired value of N
result=$(calculate_sum $N)
echo "The sum of the series is: $result"
