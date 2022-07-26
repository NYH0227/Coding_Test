from collections import defaultdict
d = defaultdict(int) 

for i in range(int(input())): d[input().split('.')[1]] += 1

for i in sorted(d.keys()): print(i, d[i])