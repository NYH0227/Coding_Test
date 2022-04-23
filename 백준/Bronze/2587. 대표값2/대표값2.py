import sys

n = [int(sys.stdin.readline()) for i in range(5)]
n = sorted(n)

print(int(sum(n)/5))
print(n[2])