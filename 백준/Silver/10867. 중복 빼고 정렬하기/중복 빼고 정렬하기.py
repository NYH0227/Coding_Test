import sys
n = int(sys.stdin.readline())
arr = list(map(int,sys.stdin.readline().split()))
sett = set(arr)

for i in sorted(sett):
    print(i,end=' ')