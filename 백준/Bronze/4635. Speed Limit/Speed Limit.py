while True:
    T = int(input())
    if T == -1 : break
    arr = []
    s = 0
    temp = 0
    for i in range(T):
        a,b = map(int,input().split())
        arr.append([a,b])
    
    for i in range(T):
        s += (arr[i][0]*(arr[i][1]-temp))
        temp = arr[i][1]
    
    print(s,"miles")

