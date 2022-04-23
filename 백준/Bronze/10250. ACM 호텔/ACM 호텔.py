T = int(input())

for i in range(T):
    agree = 1
    H, W, Num = map(int,input().split())

    while Num > H:
        Num -= H # H호
        agree += 1 # W호

    print(Num*100+agree)