#!/bin/python3

n = int(input())

if n & 1:
    print("Weird")
else:
    if n >= 2 and n <= 5 or n > 20:
        print("Not Weird")
    else:
        print("Weird")
