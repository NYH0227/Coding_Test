import sys
from collections import deque

n = int(sys.stdin.readline())
arr = deque([i for i in range(1,n+1)])

while len(arr) > 1:
    arr.popleft()
    arr.rotate(-1)

print(arr[0])