C = int(input())

for i in range(C):

    arr = list(map(int,input().split()))
    avg = (sum(arr)-arr[0])/(len(arr)-1)

    overAvg = 0

    for j in range(1,arr[0]+1):
        if arr[j] > avg:
            overAvg += 1
    
    overAvg = overAvg/arr[0] * 100
    print("{:.3f}%".format(round(overAvg,5)))