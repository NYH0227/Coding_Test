N = int(input())

for i in range(1, N+1):
    if i == 1:
        print(' '* (N-i),'*',sep = '')
    elif i == N:
        print('*',' '*(2*i-3),'*',sep = '')
    else:
        print(' '* (N-i),'*',' '*(2*i-3),'*', sep = '')