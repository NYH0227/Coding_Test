sum = 0
for i in range(int(input())):
    n,m = map(int,input().split())
    sum += m%n
print(sum)