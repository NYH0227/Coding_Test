dp = [0]*10004
arr = []
m = 0

n = int(input())

for i in range(n):
        a,b = map(int,input().split())
        m = max(m,a)
        arr.append([a,b])

dp[0] = 1
dp[1] = 1
for i in range(2,m+1):
        dp[i] = dp[i-2] + dp[i-1]

i = 1
for a,b in arr:
        print("Case #{}: {}".format(i,dp[a-1]%b))
        i += 1