n = int(input())
arr = list(map(int,input().split()))
arr = sorted(arr,reverse=True)

result = 0
for i in range(n-1):
    result += (arr[i]*arr[i+1])
    arr[1+i] = arr[i]+arr[i+1]

print(result)