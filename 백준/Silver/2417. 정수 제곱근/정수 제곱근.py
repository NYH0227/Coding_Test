import sys

n = int(sys.stdin.readline())
start,end,result = 0,0,0
end = n

while start <= end:
    mid = (start + end)//2
    if mid**2 >= n:
        end = mid-1
        result = mid
    else:
        start = mid+1

print(result)