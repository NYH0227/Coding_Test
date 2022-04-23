n = int(input()) 
l = [0] * 1000001 
for i in list(map(int, input().split())): 
    l[i] += 1 
c = 0 
for i in list(map(int, input().split())): 
    if l[i] >= 1: l[i] -= 1 
    else: c += 1
print(c)
