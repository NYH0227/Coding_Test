N,T = map(int,input().split())
arr = list(map(int,input().split()))
arr.sort()

cnt = 0
tmp = 0
for p in arr:
    if tmp < p:
        cnt += 1
        tmp = p + T - 1

print(cnt)