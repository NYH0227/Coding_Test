n = int(input())
r = []
for i in range(n):
    n,m = map(int, input().split())
    r.append([n,m])

for i in r :
    rank = 1
    for j in r:
        if i[0] < j[0] and i[1] < j[1]:
            rank += 1
    print(rank,end=' ')
