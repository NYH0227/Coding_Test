import sys
n = int(sys.stdin.readline())
arr = list(map(int,sys.stdin.readline().split()))

arrSet = sorted(list(set(arr)))

dic = {arrSet[i] : i for i in range(len(arrSet))}

for i in range(n):
    print(dic[arr[i]],end=' ')