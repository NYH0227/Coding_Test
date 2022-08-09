import sys

input = sys.stdin.readline

N = int(input())
nSet = set(map(int, input().split()))
M = int(input())
mSet = list(map(int, input().split()))


for i in mSet:
    if i in nSet: print(1, end=' ')
    else: print(0, end=' ')