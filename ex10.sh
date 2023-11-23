#!/bin/bash

echo "Enter the value of n: "
read n

sum=0

for ((i=2; i<=n; i+=2)); do
    square=$((i*i))
    sum=$((sum + square))
done

echo "The sum of squares is: $sum"
