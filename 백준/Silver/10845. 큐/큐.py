import sys

n = int(sys.stdin.readline())
result = []
for i in range(n):
    commend = list(map(str,sys.stdin.readline().split()))
    if commend[0] == 'push':
        result.append(commend[1])
    elif commend[0] == 'pop':
        if len(result) != 0:
            print(result[0])
            result.pop(0)  
        else: print(-1)
    elif commend[0] == 'size':
        print(len(result))
    elif commend[0] == 'empty':
        print(1) if len(result) == 0 else print(0)
    elif commend[0] == 'front':
        print(result[0]) if len(result) != 0 else print(-1)
    elif commend[0] == 'back':
        print(result[-1]) if len(result) != 0 else print(-1)