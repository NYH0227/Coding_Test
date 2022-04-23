from collections import defaultdict

x = defaultdict(int)
y = defaultdict(int)

for i in range(3):
    a,b = map(int, input().split())
    x[a] +=1
    y[b] +=1

for i in x.keys():
    if x[i] == 1: print(i, end= " ")

for i in y.keys():
    if y[i] == 1: print(i)

