import sys

M = int(sys.stdin.readline().strip())
N = int(sys.stdin.readline().strip())

arr = [0]
temp = 0
sum = 0
while arr[-1] <= N:
    temp += 1
    arr.append(temp**2)

temp = N

for i in arr:
    if M<=i<=N:
        temp = min(i,temp)
        sum += i
if sum == 0:
    print(-1)
else:
    print(sum)
    print(temp)
