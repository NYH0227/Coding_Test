stone = [100,50,20,10,5,2,1]
A,B = 0,0
res = 0

n = int(input())
arr = list(map(int,input().split()))

for i in arr:
    if A<=B: A += i
    else: B += i

m = abs(A-B)
for i in stone:
    if m//i != 0:
        res += m//i
        m = m%i
print(res)