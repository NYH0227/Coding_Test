from sys import stdin
n = int(stdin.readline())
ab = [0,0]
for i in range(n):
    a ,b = map(int,stdin.readline().split())
    if a>b: ab[0] += 1
    elif a<b: ab[1] += 1

print(*ab)