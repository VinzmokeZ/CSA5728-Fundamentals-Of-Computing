#!/bin/bash

# Set the range of numbers (adjust the start and end values as needed)
start=1
end=10

# Generate a sequence of numbers in the specified range
seq $start 2 $end |
  # Filter only the odd numbers using grep
  grep '^[0-9]*[13579]$' |
  # Use awk to calculate the sum
  awk '{sum += $1} END {print "Sum:", sum}'
