n=int(input())
a=[]
result=0

for i in range(n) :
    a.append(list(map(int, input().split())))
a.append(a[0])

for i in range(n) :
    result = result + (a[i][1]*a[i+1][0]) - (a[i][0]*a[i+1][1])

result /= 2
print("{:.1f}".format(abs(result)))
