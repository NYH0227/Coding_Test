from collections import defaultdict
import sys

input = sys.stdin.readline

s = defaultdict(int)
cnt = 0
while(True):
    t = input().strip()
    if not t: break
    s[t] +=1
    cnt+=1
arr = sorted(s.keys())

for i in arr:
    print("{} {:.4f}".format(i,s[i]/cnt*100))