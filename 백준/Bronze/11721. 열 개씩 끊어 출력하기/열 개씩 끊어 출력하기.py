import sys
s = sys.stdin.readline().strip()

a=0
while len(s) > a:
    print(s[a],end='')
    a +=1
    if a%10 == 0:
        print()