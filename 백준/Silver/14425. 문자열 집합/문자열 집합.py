import sys
input = sys.stdin.readline

n,m = map(int,input().split())
d = {}
cnt = 0

for i in range(n):
    d[input().strip()] = True

for i in range(m):
    if d.get(input().strip()) == True:
        cnt +=1

print(cnt)
