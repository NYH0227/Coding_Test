A, B = map(int, input().split())
arr = []

for i in range(1,46):
    arr += [i]*i
print(sum(arr[A-1:B])) 