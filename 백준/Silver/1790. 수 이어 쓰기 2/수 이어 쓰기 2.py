n, k = map(int, input().split())
result = 0
start = 1
end = 9

while k > start*end:
    k = k-(start * end)
    result = result + end
    start+=1
    end = end*10

result = (result+1) + (k-1) // start

if result > n:
    print(-1)
else:
    print(str(result)[(k-1)%start])