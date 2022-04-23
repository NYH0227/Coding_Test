def gcd2(a,b):
    a,b = (a,b) if a>b else (b,a)
    while b: a,b = b,a%b
    return a

A,B = map(int,input().split())
gcd = gcd2(A,B)
print(A*B//gcd)