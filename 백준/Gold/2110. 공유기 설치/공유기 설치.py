import sys
input = sys.stdin.readline


n,c = map(int,input().split())
arr = sorted([int(input()) for i in range(n)])

start = 1
end = arr[n-1] - arr[0]
result = 0


while start <= end:
        mid = (start + end)//2
        cnt = 1
        idx = 0
        
        for i in range(n):
                if arr[idx] + mid <= arr[i]:
                        cnt += 1
                        idx = i
        if cnt >= c:
                result = mid
                start = mid + 1
        elif cnt < c:
                end = mid -1
print(result)