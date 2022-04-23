N = int(input())
li = []
n = 0
while len(li) <= N:
    if not n%10 == 6:
        li.append(n*1000+666)
    elif (n//10)%100 == 66:
        for k in range (1000):
            li.append(n*1000+k)
    elif (n//10)%10 == 6:
        for j in range (100):
            li.append(n*1000+600+j)
    else:
        for i in range (10):
            li.append(n*1000+660+i)
    n += 1

print (li[N-1])
