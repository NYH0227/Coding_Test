n = int(input())

for _ in range(n):
    sn = 0
    sm = 0 
    for i in range(9):
        n,m = map(int,input().split())
        sn += n 
        sm += m

    if sn > sm:
        print("Yonsei")
    elif sn < sm:
        print("Korea")
    else:
        print("Draw")