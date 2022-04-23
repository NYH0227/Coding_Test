n = int(input())
for i in range(n):
    result = []
    arr = list(map(str,input().split()))
    for x in arr:
        result.append(x[::-1])
    print(*result)