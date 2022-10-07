for _ in range(int(input())):
        mx = 0
        for i in range(int(input())):
                a,b = map(str,input().split())
                if (mx<=int(b)) : 
                    res = a
                    mx = int(b)
        print(res)