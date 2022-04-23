import sys
cnt = 0
arr = list(map(int,sys.stdin.readline().split()))
for i in arr:
    if i>0: cnt +=1

print(cnt)
