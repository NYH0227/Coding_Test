for _ in range(int(input())): 
        a,b = input().split('-')
        sum = 0
        for i in range(len(a)):
                sum += (ord(a[i])-65)*26**(len(a)-i-1)
        if abs(sum - int(b))<=100: print('nice')
        else: print('not nice')