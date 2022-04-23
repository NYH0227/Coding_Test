arr = []
for _ in range(3): arr.append(int(input()))
s = set(arr)

if sum(arr) != 180: 
    print("Error")
else:
    if len(s) == 3: print("Scalene")
    elif len(s) == 2: print("Isosceles")
    elif len(s) == 1: print("Equilateral")