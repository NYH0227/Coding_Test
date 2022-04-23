import sys
a , b = map(int,sys.stdin.readline().split())
arr = list(map(int,sys.stdin.readline().split()))

result = 0

for i in range(len(arr)):
    for j in range(i+1,len(arr)):
        for k in range(j+1,len(arr)):

            sum = arr[i]+arr[j]+arr[k]
            if sum <= b:
                result = max(sum,result)

print(result)