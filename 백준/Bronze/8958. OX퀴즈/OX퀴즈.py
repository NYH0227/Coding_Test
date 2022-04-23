N = int(input())

for i in range(N):
    sum = 0
    count = 0
    arr = list(input())
    for j in range(len(arr)):
        if arr[j] == 'O':
            count += 1
            sum += count
        else:
            count = 0
    print(sum)