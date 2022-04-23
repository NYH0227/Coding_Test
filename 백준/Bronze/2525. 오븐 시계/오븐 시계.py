h,m = map(int,input().split())
n = int(input())

print((h+(n+m)//60)%24,(n+m)%60)