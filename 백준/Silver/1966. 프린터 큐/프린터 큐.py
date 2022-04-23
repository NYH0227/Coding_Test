from collections import deque
t = int(input())

for i in range(t):
    n,m = map(int, input().split())
    a = list(map(int, input().split()))
    q = deque()
    cnt = 1
    result = [0] * n
    for i in range(n):
        q.append([i,a[i]])
    
    while q:
        bestteam = max(q, key=lambda x : x[1])
        bestrank = bestteam[1]

        number, rank = q.popleft()
        
        if rank == bestrank :
            result[number] = cnt
            cnt += 1
        else : q.append([number, rank])
    print(result[m])