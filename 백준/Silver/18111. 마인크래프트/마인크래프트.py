# 블로그 참고
import sys
input = sys.stdin.readline

N, M, B = map(int, input().split())
ground = [list(map(int, input().split())) for _ in range(N)]
min_time = 987654321
height = 0

for i in range(257):
    bottom = 0
    top = 0

    for j in range(N):
        for k in range(M):
            if ground[j][k] >= i:
                top += ground[j][k]-i
            else:
                bottom += i-ground[j][k]

    if bottom > top + B:
        continue

    time = bottom + (top*2)
    if time <= min_time:
        min_time = time
        height = i

print(min_time, height)