now=0
total=[]

for _ in range(4):
    a,b=map(int, input().split())
    now += (b-a)
    total.append(now)

print(max(total))