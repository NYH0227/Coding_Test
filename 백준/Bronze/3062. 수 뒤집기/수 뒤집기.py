t = int(input())

for i in range(t):
    x = int(input())
    y = str(x)[::-1]
    
    sum = x+int(y)
    if str(sum) == str(sum)[::-1]:
        print("YES")
    else:
        print("NO")