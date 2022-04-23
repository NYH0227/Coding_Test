n = list(map(int,input()))

while n!=[0]:
    if n == n[::-1]:
        print('yes')
    else:
        print('no')
    n = list(map(int,input()))