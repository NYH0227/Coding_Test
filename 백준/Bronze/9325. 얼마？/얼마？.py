T = int(input())

for _ in range(T):
    s = int(input())
    n = int(input())
    price = s
    
    for i in range(n):
        q, p = map(int, input().split())
        price += q * p
        
    print(price)