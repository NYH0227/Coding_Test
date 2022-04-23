import sys
sys.setrecursionlimit(3000)

dx = [0,0,1,-1]
dy = [1,-1,0,0]

def dfs(x,y,color):
    visited[x][y] = 1
    for i in range(4):
        nx, ny = x+dx[i], y+dy[i]
        if(nx < 0 or nx >= n or ny < 0 or ny >= n):
            continue
        if visited[nx][ny]:
            continue
        if(graph[nx][ny] == color):
            dfs(nx, ny, color)


n = int(input())
graph = [list(map(str, input())) for _ in range(n)]
visited = [[0 for c in range(n)] for r in range(n)]
count = 0
for i in range(n):
    for j in range(n):
        if not visited[i][j]:
            dfs(i,j,graph[i][j])
            count += 1 

print(count ,end=' ')

for i in range(n):
    for j in range(n):
        if graph[i][j] == 'G':
            graph[i][j] = 'R'

count = 0
visited = [[0 for c in range(n)] for r in range(n)]
for i in range(n):
    for j in range(n):
        if not visited[i][j]:
            dfs(i,j,graph[i][j])
            count += 1 

print(count)


