import math

N, W, H = map(int,input().split())
m = math.sqrt(W*W+H*H)

for i in range(N):
    n = int(input())
    if n <= m : print("DA")
    else : print("NE")