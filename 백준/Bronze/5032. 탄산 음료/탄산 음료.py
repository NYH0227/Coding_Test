e,f,c = map(int ,input().split())
cnt = 0
e += f

while(e >= c):
    cnt += e//c
    e = e%c+e//c

print(cnt)