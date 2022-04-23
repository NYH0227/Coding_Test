import sys

arr = []

for i in range(10):
    n = int(sys.stdin.readline())
    n = n%42
    arr.append(n)

arr = set(arr)

print(len(arr))