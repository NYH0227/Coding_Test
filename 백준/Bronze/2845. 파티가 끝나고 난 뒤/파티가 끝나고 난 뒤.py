n,m = map(int,input().split())
arr = list(map(int,input().split()))

for i in arr:
    print(i-(n*m),end=' ')
