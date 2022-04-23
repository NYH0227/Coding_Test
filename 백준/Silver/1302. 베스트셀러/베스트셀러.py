import sys
from collections import defaultdict
input = sys.stdin.readline
arr = defaultdict(int)

n = int(input())
for i in range(n):
    arr[input().strip()] += 1

cnt = max(arr.values())

answer = []

for v,k in arr.items():
    if k == cnt:
        answer.append(v)

print(sorted(answer)[0])