n = int(input())
arr = list(map(int,input().split()))
arr.sort()

result = []
for i in range(n): result.append((arr[i]+arr[-1-i]))

print(min(result))