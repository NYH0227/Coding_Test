def dfs(start):
    for i in graph[start]:
        if not visited[i]:
            visited[i] = True
            global count
            count += 1
            dfs(i)


n = int(input())
m = int(input())

visited = [False] * (n+1)
visited[1] = True
graph = [[] for _ in range(n+1)]
count = 0

for i in range(m):
    a, b = map(int,input().split())
    graph[a].append(b)
    graph[b].append(a)    

dfs(1)
print(count)