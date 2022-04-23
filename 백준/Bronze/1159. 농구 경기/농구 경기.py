from collections import defaultdict

s = defaultdict(int)
n = int(input())
result = []

for i in range(n): s[input()[0]] += 1

for i in s.keys():
    if s[i] >= 5 : result.append(i)

result = sorted(result)

if len(result) > 0:
    for i in result:
        print(i, end='')
else: print("PREDAJA")