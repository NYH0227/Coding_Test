def fac(n):
    if(n <= 1):
        return 1
    return n*fac(n-1)

T = int(input())

for i in range(T):
    n, m = map(int, input().split())
    print(int(fac(m)/(fac(n)*fac(m-n))))