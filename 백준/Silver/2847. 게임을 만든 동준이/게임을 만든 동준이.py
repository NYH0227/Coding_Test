cnt = 0
arr = []

for i in range(int(input())): arr.append(int(input()))
     
for i in range(len(arr)-1, 0, -1):
    while arr[i] <= arr[i-1]:
        arr[i-1] -= 1
        cnt += 1
    
print(cnt)