n = int(input())
arr = list(map(int,input().split()))

res,temp,cnt = 0,0,0

for i in arr:
    if temp < i:
        temp = i
        cnt = 0
    else :
        cnt += 1
    res = max(cnt,res)
print(res)