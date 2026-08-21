#!/bin/bash

echo "Enter three numbers:"
read a
read b
read c

if [ $a -ge $b ] && [ $a -ge $c ]
then
    echo "$a is the greatest number."
elif [ $b -ge $a ] && [ $b -ge $c ]
then
    echo "$b is the greatest number."
else
    echo "$c is the greatest number."
fi
