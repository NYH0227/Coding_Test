import math
import sys

T = int(sys.stdin.readline())

for _ in range(T):
    x1,y1,r1,x2,y2,r2 = map(int,sys.stdin.readline().split())

    r = math.sqrt((x1-x2)**2 + (y1-y2)**2) #반지름 끼리 합
    list = [r,r1,r2]
    list.sort()

    if r == 0:
        if r1 == r2:
            print(-1)
        else:
            print(0)
    elif list[2] < list[1] + list[0]:
        print(2)
    elif r1+r2 == r or r+r1 == r2 or r+r2 == r1:
        print(1)
    else:
        print(0)