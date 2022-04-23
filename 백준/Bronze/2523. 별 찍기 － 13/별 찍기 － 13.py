import math

n = int(input())

for i in range(-n+1,n):
    print("*"*(n-abs(i)))