#!/bin/bash

sum=0

for ((i = 1; i <= 10; i += 2)); do
    square=$((i * i))
    sum=$((sum + square))
done

echo "Sum of squares of odd numbers: $sum"
