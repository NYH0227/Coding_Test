def f(num):
    if num<9:
        return str(num)
    return f(num//9)+str(num%9)

print(f(int(input())))
