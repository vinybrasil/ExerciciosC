#!/bin/python3

import math
import os
import random
import re
import sys

#entra uma matriz, tira o traço dela e o traço ''inverso'', subtrai e tira o modulo
#

def diagonalDifference(arr):
   
    i = 0
    j = 0
    PRIMEIRA_DIAGONAL = []
    while i < len(arr[0]):
        PRIMEIRA_DIAGONAL.append(arr[i][j])
        j += 1
        i += 1
    
    i = len(arr) - 1
    j = 0

    SEGUNDA_DIAGONAL = []
    while i > -1:
        SEGUNDA_DIAGONAL.append(arr[i][j])
        j += 1
        i -= 1
    
    print(PRIMEIRA_DIAGONAL, SEGUNDA_DIAGONAL)
    dd = sum(PRIMEIRA_DIAGONAL) - sum(SEGUNDA_DIAGONAL)
    if dd<0:
        return -dd
    else:
        return dd



if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    n = int(input().strip())

    arr = []

    for _ in range(n):
        arr.append(list(map(int, input().rstrip().split())))

    result = diagonalDifference(arr)

    fptr.write(str(result) + '\n')

    fptr.close()
