import sys
n = int(sys.stdin.readline())
a = []

for i in range(n):
    x, y = map(int,sys.stdin.readline().split())
    a.append((x,y))

a = sorted(a)

for i in a:
    print(i[0],i[1])