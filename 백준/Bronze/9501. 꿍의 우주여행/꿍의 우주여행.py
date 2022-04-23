t=int(input())
for i in range(t):
    n,d=map(int,input().strip().split())
    cnt=0
    for j in range(n):
        v,f,c=map(int,input().strip().split())
        if (d/v*c)<=f:
            cnt+=1
    print(cnt)
