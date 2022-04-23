a,b=map(int,input().strip().split())
c=int(input().strip())
print(a+b if a+b<c*2 else a+b-c*2)