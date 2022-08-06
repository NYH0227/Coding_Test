from itertools import combinations

while True:
    arr = list(map(int,input().split()))
    if arr[0] == 0: break
    
    l = arr[1:]
    for i in combinations(l,6):
        for j in i:
            print(j,end=" ")
        print()
    print()