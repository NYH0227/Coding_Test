x,y=map(int, input().split())

d=[31,28,31,30,31,30,31,31,30,31,30,31]
a=['SUN','MON','TUE','WED','THU','FRI','SAT']
sum=0
for i in range(x-1):
    sum+=d[i]
sum+=y
print(a[sum%7])