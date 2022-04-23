import sys

n = int(sys.stdin.readline())
arr = [0] * 10001

for i in range(n):
    arr[int(sys.stdin.readline())] += 1

for j in range(len(arr)):
    if arr[j] != 0:
        for k in range(arr[j]):
            print(j)