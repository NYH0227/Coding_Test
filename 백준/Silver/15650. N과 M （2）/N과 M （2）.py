from itertools import combinations

a,b = map(int,input().split())

arr = [i for i in range(1,a+1)]
result = combinations(arr,b)

for i in result:
    print(*i)