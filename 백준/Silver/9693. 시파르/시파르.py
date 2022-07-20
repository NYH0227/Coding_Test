def fac(m):
    now = 5
    l = []
    res = 0
    while(now <= m):
        l.append(now)
        now *= 5    
    
    for i in l:
        res += m//i
    
    return res

case = 0  
while(True):
    case += 1
    n = int(input())
    if n==0: break

    print("Case #{}: {}".format(case,fac(n)))