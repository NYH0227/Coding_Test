from math import ceil
arr = []
for i in range(5): arr.append(int(input()))
print(arr[0] - max(ceil(arr[1]/arr[3]),ceil(arr[2]/arr[4])))