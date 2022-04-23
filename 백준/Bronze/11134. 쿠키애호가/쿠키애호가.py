from math import ceil
t = int(input())
for i in range(t):
    n,m = map(int,input().split())
    print(ceil(n/m))