import sys

result = 0
N = int(input())

arr = list(map(int,input().split()))
max_arr = max(arr)

for i in range(N):
    arr[i] = arr[i]/max_arr*100
    result += arr[i]

print(result/N)