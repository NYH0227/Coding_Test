T= int(input())
arr = []
for i in range(T):
    s,n = map(str,input().split())
    arr.append([s,int(n)])

arr = sorted(arr, key=lambda arr : -arr[1], reverse=True)
print(arr[0][0])