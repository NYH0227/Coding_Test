import sys

n = int(sys.stdin.readline())
for i in range(n):
    cnt = 0
    stack = list(sys.stdin.readline().strip())

    for i in range(len(stack)):

        if stack[i]==')':
            cnt -=1
        elif stack[i]=='(':
            cnt +=1

        if len(stack)-1==i and cnt==0:
            print('YES')
        if len(stack)-1==i and cnt>0:
            print('NO')
        elif cnt <0:
            print('NO')
            break