for _ in range(int(input())):
        arr = list(map(int,input().split()))
        E = 0
        O = 0
        for i in arr[1:]:
                if (i&1) : O += i
                else : E += i

        if O > E : print("ODD")
        elif O < E : print("EVEN")
        else : print("TIE")