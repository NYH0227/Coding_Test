import sys

goTo = [5,4,3,2,1]
cnt = 0

n = int(sys.stdin.readline())

for i in goTo:
    cnt += n//i
    n= n%i

print(cnt)