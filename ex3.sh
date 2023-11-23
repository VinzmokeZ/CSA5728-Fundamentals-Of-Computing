#!/bin/bash

echo "Enter the value of n:"
read n

echo "Odd number series from 1 to $n:"
for (( i=1; i<=n; i+=2 )); do
    echo $i
done
