import sys

T = int(sys.stdin.readline())
cnt = 0
arr = [int(sys.stdin.readline()) for _ in range(T)]

for i in arr[::-1]:
    if i == T:
        T -= 1
print(T)