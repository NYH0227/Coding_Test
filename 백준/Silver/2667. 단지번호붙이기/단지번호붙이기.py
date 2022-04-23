def dfs(x,y):
    global a
    if x<=-1 or x>=n or y<=-1 or y>=n:
        return 0
    if graph[x][y] == 1:
        a += 1
        graph[x][y] = a
        dfs(x-1,y)
        dfs(x,y-1)
        dfs(x+1,y)
        dfs(x,y+1)
        return a    
    return a

n = int(input())
a = 0
graph = []
num = []
result = 0

for i in range(n):
    graph.append(list(map(int,input())))

for i in range(n):
    for j in range(n):
        if dfs(i,j) >= 1:
            num.append(dfs(i,j)-1)
            result += 1
            a=0

num.sort()
print(result)
for i in num:
    print(i)