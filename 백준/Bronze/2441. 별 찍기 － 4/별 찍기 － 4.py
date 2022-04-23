import sys

N = int(sys.stdin.readline())

for i in range(0,N):
    print(' '*(i),end='')
    print('*'*(N-i))