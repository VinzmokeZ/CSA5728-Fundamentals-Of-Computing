#!/bin/bash

echo "Enter the number of terms in the Fibonacci series:"
read n

a=0
b=1

echo "Fibonacci series up to $n terms:"
echo -n "$a, $b"

i=2
while [ $i -lt $n ]
do
  c=$((a + b))
  echo -n ", $c"

  a=$b
  b=$c

  i=$((i + 1))
done

echo
