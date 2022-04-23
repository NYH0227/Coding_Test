import sys

n = sys.stdin.readline().strip()

if len(n)==4 or (len(n)==3 and n[1]=='0'):
    a=int(n[0:2])
    b=int(n[2:])

elif len(n)==3 and n[-1]=='0':
    a=int(n[0])
    b=int(n[1:])

else:
    a=int(n[0])
    b=int(n[1])

print(a+b)