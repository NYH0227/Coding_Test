first = [1,1,2,2,2,8]
result = []

n = list(map(int,input().split()))
for i in range(len(first)):
    result.append(first[i]-n[i])

print(*result)