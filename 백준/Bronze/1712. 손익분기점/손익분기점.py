A, B, C = map(int,input().split())

if C <= B:
    print(-1)
else :
    print((A//(C-B))+1)