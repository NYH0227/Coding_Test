a = sorted(list(map(int,input().split())))

if a[0]==a[2]: print(10000+a[0]*1000)
elif (a[0] != a[1] != a[2]): print(a[2]*100)
else: print(1000+a[1]*100)