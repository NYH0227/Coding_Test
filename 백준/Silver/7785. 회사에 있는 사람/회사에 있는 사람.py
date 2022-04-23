from collections import defaultdict
import sys

n = int(sys.stdin.readline())
s = defaultdict(int)

for _ in range(n):
    a,b = (sys.stdin.readline()).split()
    if b == 'enter':
        s[a] += 1
    elif b == 'leave':
        del s[a]

s = sorted(s,reverse=True)

for i in s:
    print(i)