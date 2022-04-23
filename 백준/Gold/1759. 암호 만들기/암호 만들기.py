import sys
from itertools import combinations as cb

input = sys.stdin.readline
a,b = map(int ,input().split())
c = sorted(list(map(str, input().split())))

mo = ['a','e','i','o','u']
arr = list(map(''.join,cb(c,a)))


for i in arr:
    cnt, flag = 0, 0
    for j in i:
        if (j in mo):
            flag += 1
        else:
            cnt += 1
    if (cnt > 1 and flag > 0): print(i)