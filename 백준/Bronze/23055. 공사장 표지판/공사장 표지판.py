def men(n):
    print('*'*n,end='')
    print()

def inner(n,k):
    for i in range(n+1):
        if i==0 or i==n-1 or k==i-1 or n==i+k+2:
            print('*',end='')
        else:
            print(' ',end='')
    print()    


n = int(input())
men(n)
for i in range(n-2):
    inner(n,i)
    
if n!=1:
    men(n)