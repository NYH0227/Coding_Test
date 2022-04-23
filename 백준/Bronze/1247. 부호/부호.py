import sys
for _ in range(3):
    n = int(sys.stdin.readline())
    s = 0
    for i in range(n): s += int(sys.stdin.readline())
    if s > 0 : print("+")
    elif s < 0 : print("-")
    else : print("0")