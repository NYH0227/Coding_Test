import sys

N = int(sys.stdin.readline())
a = []
for i in range(N):
    a.append(int(input()))

a = sorted(a,reverse=True)

for i in range(N):
    a[i] = a[i]*(i+1)

print(max(a))