for _ in range(int(input())):
    op = list(map(str,input().split()))
    res = float(op[0])
    for i in op[1:]:
        if(i == "@"): res *= 3
        elif(i=="#"): res -= 7
        elif(i=="%"): res += 5
    print("{:.2f}".format(res))