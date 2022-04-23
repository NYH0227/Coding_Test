import sys
import bisect

T = int(sys.stdin.readline())
for _ in range(T):
    count = 0
    A , B = map(int,sys.stdin.readline().split())
    N = list(map(int,sys.stdin.readline().split()))
    M = list(map(int,sys.stdin.readline().split()))

    N.sort()
    M.sort()

    for i in N:
        count += bisect.bisect_left(M,i)
    
    print(count)