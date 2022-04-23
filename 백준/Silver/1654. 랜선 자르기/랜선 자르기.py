k, n = map(int, input().split())
c = [int(input()) for _ in range(k)]

start = 1 
end = max(c)

while(start <= end):
    mid = (start + end) // 2
    hap = 0
    for i in c:
        hap += i // mid
    if hap >= n:
        start = mid + 1
    else:
        end = mid - 1

print(end)