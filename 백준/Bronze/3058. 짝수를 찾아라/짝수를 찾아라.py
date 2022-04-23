T = int(input())
for i in range(T):
    arr = list(map(int,input().split()))
    s = []
    
    for i in arr:
        if i%2 == 0: 
            s.append(i)

    print(sum(s),min(s))
