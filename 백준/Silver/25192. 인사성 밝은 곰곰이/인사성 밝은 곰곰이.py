import sys

s = set()
result = 0
input = sys.stdin.readline

for _ in range(int(input())):
    i = input()
    if i=="ENTER\n":
        result += len(s)
        s = set()
    else:
        s.add(i)

result += len(s)

print(result)