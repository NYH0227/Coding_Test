arr = []
n = int(input())

for i in range(n): arr.append(input().split())
arr.sort(key=lambda x: (-int(x[3]),-int(x[2]),-int(x[1]),x[0]))

print(arr[0][0])
print(arr[-1][0])