n = int(input())
arr = sorted(list(map(int,input().split())))
s = 1
for i in range(n):
    if s < arr[i] : break
    s += arr[i]

print(s)
