import sys

N = int(sys.stdin.readline())
arr = []

for i in range(N):
    a = input().split()
    arr.append((int(a[0]),a[1]))

arr = sorted(arr, key=lambda x: (x[0]))

for i in arr:
    print(i[0],i[1])