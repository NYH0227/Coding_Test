res,now = 0,0
for i in range(10):
        n,m = map(int,input().split())
        now += m-n
        res = max(res,now)
print(res)