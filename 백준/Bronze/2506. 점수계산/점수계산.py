n = int(input())
arr = list(map(int,input().split()))
cnt = 0
count = 0
for i in arr:
    if i == 0:
        count = 0
    elif i == 1:
        cnt += (i+count)
        count += 1

print(cnt)