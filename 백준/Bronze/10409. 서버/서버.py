a,b = map(int,input().split())
arr = list(map(int,input().split()))
cnt = 0
sum = 0
for i in arr:
    sum += i
    if sum <= b:
        cnt +=1
    else:
        break
print(cnt)