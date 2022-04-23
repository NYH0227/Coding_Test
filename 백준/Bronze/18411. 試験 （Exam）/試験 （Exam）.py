arr = list(map(int,input().split()))
arr.remove(min(arr))
print(sum(arr))