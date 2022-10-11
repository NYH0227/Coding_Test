while True:
    arr = []

    n = int(input())
    if n==0 : break
    
    for i in range(n): arr.append(input())
    
    arr.sort(key = lambda x : x.lower())
    print(arr[0])