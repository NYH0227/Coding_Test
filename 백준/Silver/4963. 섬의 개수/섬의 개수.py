import sys
sys.setrecursionlimit(3000)

def dfs(x,y):
    if x <= -1 or x >= n or y<=-1 or y >= m:
        return False
    if graph[x][y] == 1:
        graph[x][y] = 0
        dfs(x-1,y)
        dfs(x,y-1)
        dfs(x+1,y)
        dfs(x,y+1)
        dfs(x+1,y+1)
        dfs(x-1,y-1)
        dfs(x+1,y-1)
        dfs(x-1,y+1)
        return True
    return False

s = []
while True:

    m,n = map(int,sys.stdin.readline().split())
    if n==0 and m==0:
        break

    graph = []
    for i in range(n):
        graph.append(list(map(int,sys.stdin.readline().split())))

    result = 0
    for i in range(n):
        for j in range(m):
            if dfs(i,j) == True:
                result +=1

    s.append(result)

for i in s:
    print(i)
