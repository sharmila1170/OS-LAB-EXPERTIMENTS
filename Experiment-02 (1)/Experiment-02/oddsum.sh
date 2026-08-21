#!/bin/bash

echo "Enter the value of N:"
read n

sum=0
i=1

while [ $i -le $n ]
do
    sum=$((sum + i))
    i=$((i + 2))
done

echo "Sum of odd numbers = $sum"
