import sys
input = sys.stdin.readline

N, M = map(int, input().split())
A=[list(map(int, input().split())) for i in range(N)]
M, K = map(int, input().split())
B=[list(map(int, input().split())) for i in range(M)]

C=[[0]*K for _ in range(N)]

for i in range(N):
    for j in range(K):
        for k in range(M):
            C[i][j]+=(A[i][k]*B[k][j])

for r in C: print(*r)