#!/bin/bash

echo "Enter the value of n: "
read n

sum=0

for ((i=1; i<=n; i++))
do
    power=$((i**i))
    sum=$((sum + power))
done

echo "The sum of the series is: $sum"
