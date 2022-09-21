import sys
input = sys.stdin.readline
sys.setrecursionlimit(10000)

def dfs(n):
    checked.append(n)
    for i in graph[n]:
        if i not in checked:
            dfs(i)


n, m = map(int, input().split())
graph = [[] for i in range(n+1)]
checked = []
cnt = 0


for i in range(m):
    u, v = map(int, input().split())
    graph[u].append(v)
    graph[v].append(u)

    
for i in range(1, n+1):
    if i not in checked:
        dfs(i)
        cnt += 1
print(cnt)