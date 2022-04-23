p,m=map(int,input().split())
if p-m<0 or (p-m)%2!=0:
    print(-1)
else:
    b=(p-m)//2
    a=p-b
    print(max(b,a),min(a,b))