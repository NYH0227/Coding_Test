T = int(input())
for i in range(T):
    k = int(input())
    n = int(input())

    p = [j for j in range(1,n+1)]
    for x in range(k):
        for y in range(n-1):
            p[y+1] += p[y]

    print(p[n-1])