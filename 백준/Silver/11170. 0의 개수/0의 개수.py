T = int(input())

for i in range(T):
    cnt = 0
    a,b = map(int,input().split())
    for i in range(a,b+1):
        for j in str(i):
            if j == '0':
                cnt += 1
    print(cnt)