#!/bin/python3

import sys

iterationswaps = 0;
totalswaps = 0;
n = int(input().strip())
a = list(map(int, input().strip().split(' ')))
size = len(a);

for i in range(0, size):
    iterationswaps = 0;
    for j in range(0, size-1):
        if(a[j] > a[j+1]):      #swap these
            c = a[j+1];
            a[j+1] = a[j];
            a[j] = c;
            iterationswaps += 1;
            totalswaps += 1;
    if(iterationswaps == 0):
        break;
        
print("Array is sorted in " + str(totalswaps) + " swaps.");
print("First Element: " + str(a[0]));
print("Last Element: " + str(a[size-1]));

