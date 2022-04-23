A, B =map(int,input().split())
N = int(input())
min = 1000

for i in range(N):
    temp = int(input())
    if abs(B-temp) < min:
        min = abs(B-temp)

if min+1 < abs(B-A):
    print(min+1)
else:
    print(abs(B-A))