#!/bin/bash

echo "Enter a number:"
read n

max=0

while [ $n -gt 0 ]
do
    digit=$((n % 10))

    if [ $digit -gt $max ]
    then
        max=$digit
    fi

    n=$((n / 10))
done

echo "Largest digit = $max"
