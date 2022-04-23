while True:
    try:
        cnt = 0
        n = list(map(int,input().split()))
        mx = max(n[2]-n[1],n[1]-n[0])
        print(mx-1)
    except:
        break
