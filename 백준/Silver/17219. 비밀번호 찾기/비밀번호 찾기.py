import sys
input=sys.stdin.readline

M,N=map(int, input().split())
d=dict()
for i in range(M):
    n, s = map(str, input().split())
    d[n]=s

for i in range(N):
    print(d[input().strip()])

