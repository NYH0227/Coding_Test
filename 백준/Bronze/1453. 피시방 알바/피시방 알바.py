n = int(input())
a = list(map(int, input().split()))
cnt = 0

for i in range(min(a), max(a)+1):
    if a.count(i) > 1:
        cnt += a.count(i) - 1
print(cnt)