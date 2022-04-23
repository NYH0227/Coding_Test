import sys

N , K = map(int,input().split())
coins = [int(sys.stdin.readline()) for i in range(N)]
coins.reverse()
count = 0

for coin in coins:
    count += K//coin
    K = K%coin

print(count)