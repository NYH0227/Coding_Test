noSelf = []

def d(n):
    i_sum = 0
    for j in list(str(n)):
        i_sum += int(j)
    return i_sum + int(n)

for i in range(1,10001):
    num = d(i)
    noSelf.append(num)

for k in range(1,10001):
    if k not in noSelf:
        print(k)