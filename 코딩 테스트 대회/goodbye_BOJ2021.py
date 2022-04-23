# Good Bye, BOJ 2021! 종료
# leejseo 시작: 2021년 12월 31일 20:00 종료: 2021년 12월 31일 23:00

# 문제.1 2021년도 다음으로 연속한 두 소수의 곱인 다음 년도를 구하는 문제
import math
import sys

maximam = 103
array = [True for i in range(maximam+1)]
s = []
n = int(sys.stdin.readline())

for i in range(2,int(math.sqrt(maximam)+1)):
    if array[i] == True:
        j=2
        while i*j <= maximam:
            array[i*j] =False
            j += 1

for i in range(2, maximam+1):
    if array[i]: s.append(i)

for i in range(len(s)-1):
    if s[i]*s[i+1] > n:
        print(s[i]*s[i+1])
        break


# 문제.3 3차원 블록의 색이 겹치지 않는 규칙을 찾는 문제
import sys
T = int(sys.stdin.readline())

for i in range(T):
    n = int(sys.stdin.readline())
    if n%9 == 0 or (n+1)%3 == 0: print("TAK")
    else: print("NIE")
