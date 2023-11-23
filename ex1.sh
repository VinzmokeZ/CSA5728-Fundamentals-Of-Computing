#!/bin/bash

echo "Enter the value of n:"
read n

if [[ $n -lt 1 ]]; then
  echo "Please enter a positive integer greater than 0."
  exit 1
fi

echo "Number series from 1 to $n:"
for ((i=1; i<=n; i++)); do
  echo $i
done
