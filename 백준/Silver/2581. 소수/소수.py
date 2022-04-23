import sys
import math

M = int(sys.stdin.readline())
N = int(sys.stdin.readline())

arr = [True for _ in range(N+1)]
mini = N
sum = 0
for i in range(2,int(math.sqrt(N)+1)):
    if arr[i]:
        j = 2
        while i*j <= N:
            arr[i*j] = False
            j += 1

for i in range(max(M,2),N+1):
    if arr[i]:
        mini = min(mini,i)
        sum += i

if sum == 0:
    print(-1)
else:
    print(sum)
    print(mini)