dp = [0 for i in range(252)]
dp[0], dp[1] = 1,1
for i in range(1,251): dp[i] = dp[i-1]+2*dp[i-2]

while(1):
    try: print(dp[int(input())])
    except: break