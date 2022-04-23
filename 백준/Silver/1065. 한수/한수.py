def hanSu(n):
    arr = list(map(int,str(n)))
    if arr[1]-arr[0] == arr[2]-arr[1]:
        return 1
    else :
        return 0

N = int(input())
count = 0

for i in range(1,N+1):
    if i < 100:
        count += 1
    else:
        count += hanSu(i)

print(count)