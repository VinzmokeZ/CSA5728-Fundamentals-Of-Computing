#!/bin/bash

# Initialize variables
sum=0
count=0

# Read numbers from the user
echo "Enter the numbers (enter 0 to finish):"
while true; do
    read -p "Enter a number (0 to finish): " num

    # Check if the user wants to finish entering numbers
    if [ "$num" -eq 0 ]; then
        break
    fi

    # Add the number to the sum and increment the count
    sum=$((sum + num))
    count=$((count + 1))
done

# Calculate the average
if [ "$count" -eq 0 ]; then
    echo "No numbers entered. Cannot calculate average."
else
    average=$((sum / count))
    echo "Sum: $sum"
    echo "Count: $count"
    echo "Average: $average"
fi
