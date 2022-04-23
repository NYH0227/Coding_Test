import sys
n,m = map(int, sys.stdin.readline().split())
arr = list(map(int,sys.stdin.readline().split()))

start = 1
end = max(arr)

while(start <= end):
    total = 0
    mid = (start + end) // 2

    for x in arr:
        total += x - mid if x > mid else 0

    if total >= m:
        start = mid + 1
    else:
        end = mid -1

print(end)
