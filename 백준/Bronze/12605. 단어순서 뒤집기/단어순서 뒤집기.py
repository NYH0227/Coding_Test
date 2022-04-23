n = int(input())

for i in range(n):
    arr = list(map(str,input().split()))
    print("Case #{0}: ".format(i+1),end='')
    print(*arr[::-1],end='')
    print()