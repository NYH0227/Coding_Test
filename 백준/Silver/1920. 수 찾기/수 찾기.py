from collections import defaultdict

n = int(input())
nArr = list(map(int,input().split()))
m = int(input())
mArr = list(map(int,input().split()))

di = defaultdict(int)

for i in nArr: di[i] += 1

for i in mArr: print(1) if di[i] >= 1 else print(0)