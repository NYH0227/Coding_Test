import sys
coin_types = [500,100,50,10,5,1]

N = 1000- int(sys.stdin.readline())

count = 0

for coin in coin_types:
    count += N//coin
    N %= coin

print(count)