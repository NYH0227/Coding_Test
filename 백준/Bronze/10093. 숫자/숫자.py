n,m = map(int,input().split())
if n>m : n,m = m,n
if n==m:
    print(0)
else :
    print(m-n-1)

for i in range(n+1,m): print(i, end=' ')