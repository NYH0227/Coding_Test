n,m = map(int, input().split())
d = []
for i in range(n):
    d.append(input().split())
    
where = []    
for i in range(n):
    for j in range(m):
        if d[i][j] == '1': 
            where.append((i,j))
            
print(abs(where[1][0]-where[0][0])+abs(where[1][1]-where[0][1]))