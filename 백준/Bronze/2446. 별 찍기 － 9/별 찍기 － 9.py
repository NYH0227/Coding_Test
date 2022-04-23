n = int(input())

for i in range(1,n+1):
    print(' '*(i-1)+'*'*((n-i)*2+1))

for j in range(1,n):
    print(' '*(n-j-1)+'*'*((2*j)+1))