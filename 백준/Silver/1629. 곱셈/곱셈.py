import sys

def fuc(A, B):
    global C
    if B==1: 
        return A%C
    m=fuc(A, B//2)
    if not B%2: 
        return (m*m)%C
    else: 
        return (m*m*A)%C

input = sys.stdin.readline
A, B, C = map(int, input().split())

print(fuc(A, B))
