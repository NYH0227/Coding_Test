n = int(input())
arr = []
for i in range(n):
    arr.append(list(map(int,input().split())))

result = [[0 for _ in range(3)] for _ in range(n)]
for i in range(n):
    for j in range(3):
        if i == 0: result[i][j] = arr[i][j]
        else: result[i][j] = min(result[i-1][(j+1)%3],result[i-1][(j+2)%3]) + arr[i][j]
        
print(min(result[-1]))

