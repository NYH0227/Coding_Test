money = []
t = 1
res = 0

n = int(input())

while(True):
    if(n<t):
        break
    money.append(t)
    t = int(str(t)+'1')

money.sort(reverse=True)

for i in money:
    cnt = n//i
    n -= i*cnt
    res += cnt

print(res)
