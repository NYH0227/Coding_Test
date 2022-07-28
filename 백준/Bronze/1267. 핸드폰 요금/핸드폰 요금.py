import sys
input = sys.stdin.readline

n = int(input())
s = list(map(int, input().split()))
y = 0
m = 0

for i in s:
    y += ((i//30)+1)*10
    m += ((i//60)+1)*15

if m<y:
    print("M", m)
elif y<m:
    print("Y", y)
else:
    print("Y M", m)