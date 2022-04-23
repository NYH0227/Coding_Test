import sys

n=int(sys.stdin.readline())
result=0
for i in range(n):
    result+=(int(sys.stdin.readline().strip())-1)
print(result+1)
