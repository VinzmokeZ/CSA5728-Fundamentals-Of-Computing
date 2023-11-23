#!/bin/bash

start=1  # start of the series
end=10   # end of the series (adjust as needed)

# Generate the series using seq
series=$(seq $start 2 $end)

# Use grep to filter out even numbers
even_numbers=$(echo $series | tr ' ' '\n' | grep -E '\b[0-9]*[02468]\b')

# Use awk to calculate the sum
sum=$(echo $even_numbers | awk '{s+=$1} END {print s}')

echo "Series: $series"
echo "Even Numbers: $even_numbers"
echo "Sum of Even Numbers: $sum"
