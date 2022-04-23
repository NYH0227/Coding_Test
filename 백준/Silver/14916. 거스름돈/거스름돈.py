import sys

n = int(sys.stdin.readline())
cnt = n//5
r = n%5

while(cnt>0 and r % 2 != 0):
    cnt -= 1
    r += 5

if r%2 == 0: print(int(cnt+r/2))
else: print('-1')