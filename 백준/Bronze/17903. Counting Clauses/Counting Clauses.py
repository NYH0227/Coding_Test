import sys
input = sys.stdin.readline

a ,b = map(int,input().split())
for i in range(a):
    arr = list(map(int,input().split()))

print( "satisfactory") if a>=8 else print("unsatisfactory")