coins = [25,10,5,1]

n = int(input())
for i in range(n):
    result = [0,0,0,0]
    c = int(input())
    for idx,coin in enumerate(coins):
        result[idx] = c//coin
        c = c%coin
    
    print(*result)
        