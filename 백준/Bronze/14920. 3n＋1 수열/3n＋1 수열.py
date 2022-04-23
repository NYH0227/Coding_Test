n=int(input())
cnt=1
while True:
    if n==1:
        break
    n=n//2 if n%2==0 else 3*n+1
    cnt+=1
print(cnt)