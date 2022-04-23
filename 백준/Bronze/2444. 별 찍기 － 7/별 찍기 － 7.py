import sys
n = int(sys.stdin.readline())
for i in range(2*n-1):
    print(" "*(n-i-1) + "*"*(2*i+1)) if i<n else print(" "*(i-n+1) + "*"*(4*n-2*i-3))
