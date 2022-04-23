import math
import sys

m, n = map(int,sys.stdin.readline().split())
array = [True for i in range(n+1)]

for i in range(2,int(math.sqrt(n)+1)):
    if array[i] == True:
        j=2
        while i*j <= n:
            array[i*j] =False
            j += 1

for i in range(max(m,2), n+1):
    if array[i]: print(i)