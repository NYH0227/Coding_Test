import sys

n = list(sys.stdin.readline().strip())
result = False

for i in range(len(n)-1):
    x = 1
    y = 1
    num1 = n[:i+1]
    num2 = n[i+1:]
    
    for i in num1:
        x *= int(i)
    for j in num2:
        y *= int(j)

    if x==y: result=True

if result ==True : print('YES')
else: print('NO')