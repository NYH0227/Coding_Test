n = int(input())
flag = False
result = 1
while n != 1:
    if n % 2 == 0:
        n //= 2
        if flag: result += 1
    else:
        flag = True
        n = (n + 1) // 2
print(result)