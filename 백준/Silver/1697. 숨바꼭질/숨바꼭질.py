import sys
from collections import deque

def tel(n):
    
    queue = deque([[n,0]])
    arr = [False] * 100001
    arr[n] = True

    while queue:
        n,d = queue.popleft()
        if n == k:
            return d
        
        list = [n+1,n-1,n*2]
        for i in list:
            if 0 <= i < 100001 and not arr[i]:
                arr[i] = True
                queue.append((i,d+1))

n,k = map(int,sys.stdin.readline().split())
print(tel(n))