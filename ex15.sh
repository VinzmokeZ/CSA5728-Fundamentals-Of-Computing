#!/bin/bash

is_armstrong() {
    num=$1
    original_num=$num
    num_digits=${#num}

    sum=0

    while [ $num -gt 0 ]; do
        digit=$((num % 10))
        sum=$((sum + digit ** num_digits))
        num=$((num / 10))
    done

    if [ $sum -eq $original_num ]; then
        echo "$original_num is an Armstrong number."
    else
        echo "$original_num is not an Armstrong number."
    fi
}

# Example: Check if 153 is an Armstrong number
is_armstrong 153
