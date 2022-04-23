import sys

n = int(sys.stdin.readline())
arr = sorted(list(map(int,input().split())))
print(arr[-1])