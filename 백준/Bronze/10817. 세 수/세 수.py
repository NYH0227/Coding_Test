import sys

N = list(map(int,sys.stdin.readline().split()))
N = sorted(N)

print(N[-2])