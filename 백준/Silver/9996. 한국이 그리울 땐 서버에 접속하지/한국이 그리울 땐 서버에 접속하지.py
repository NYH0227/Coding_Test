import sys

T = int(input())
start,end = input().split('*')
for _ in range(T):
    s = input()
    if len(start)+len(end) > len(s): print("NE")
    else:
        if s[0:len(start)] == start and s[len(s)-len(end):]==end :
            print("DA")
        else:
            print("NE")