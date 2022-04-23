N = int(input())
A = list(map(int,input().split()))
result = 0

for i in A:
    count = 0
    if i == 0 or i == 1:
        continue
    for j in range(2,i+1):
        if i%j == 0:
            count +=1

    if count == 1:
        result += 1

print(result)