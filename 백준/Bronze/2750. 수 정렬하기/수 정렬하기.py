import sys
N = int(input())

num = [int(sys.stdin.readline()) for i in range(N)]

num.sort()

for i in num:
    print(i)