import sys
from collections import deque


n = int(sys.stdin.readline())
d = deque([])
for i in range(n):
    c = list(map(str,sys.stdin.readline().split()))
    if c[0] == 'push_front':
        d.appendleft(c[1])
    elif c[0] == 'push_back':
        d.append(c[1])
    elif c[0] == 'pop_front':
        if len(d) != 0:
            print(d[0])
            d.popleft()  
        else: print(-1)

    elif c[0] == 'pop_back':
        if len(d) != 0:
            print(d[-1])
            d.pop()
        else: print(-1)

    elif c[0] == 'size':
        print(len(d))
    elif c[0] == 'empty':
        print(1) if len(d) == 0 else print(0)
    elif c[0] == 'front':
        print(d[0]) if len(d) != 0 else print(-1)
    elif c[0] == 'back':
        print(d[-1]) if len(d) != 0 else print(-1)
    
