boll = 1

for i in range(int(input())):
    x, y = map(int, input().split())
    if x == boll:
        boll = y
        continue
    if y == boll:
        boll = x
        

print(boll)