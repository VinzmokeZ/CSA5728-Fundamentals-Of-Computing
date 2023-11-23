#!/bin/bash

calculate_factorial() {
    if [ "$1" -eq 0 ] || [ "$1" -eq 1 ]; then
        echo 1
    else
        echo $(( $1 * $(calculate_factorial $(( $1 - 1 ))) ))
    fi
}

read -p "Enter a number: " num

if [[ $num =~ ^[0-9]+$ ]]; then
    result=$(calculate_factorial $num)
    echo "Factorial of $num is: $result"
else
    echo "Invalid input. Please enter a non-negative integer."
fi
