import sys
from collections import deque

n,k = map(int,sys.stdin.readline().split())
q = deque([i for i in range(1,n+1)])
print('<',end='')
while True:
    q.rotate(1-k)
    print(q[0],end='')
    q.popleft()

    if 0 == len(q): break
    else: print(end=', ')

print('>',end='')
