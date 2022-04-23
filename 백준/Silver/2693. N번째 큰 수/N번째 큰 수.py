num = int(input())
N = 3

for i in range(num):
    a = list(map(int,input().split()))
    a.sort(reverse=True)
    for j in range(N-1):
        del a[0]

    print(a[0])