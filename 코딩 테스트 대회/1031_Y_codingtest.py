# 2021 연세대학교 프로그래밍 경진대회 Open Contest
# 2021.10.31
# 
# 문제.1 입력받은 문자열에 'd2' 라는 문자가 포함하는 지 확인하는 문제
# 문제.2 그리드 문제
# 문제.3 팰린드롬 문제에서 접두사나 접미사도 팰린드롬인지 재귀로 푸는 문제


#문제 1
import sys

result = 'unrated'
n = sys.stdin.readline()
n = n.lower()
for index, i in enumerate(n):
    if n[index] == 'd' and n[index+1] == '2':
        result = 'D2'
        break

print(result)



# 문제 2 당시에 틀렸던 코드
from collections import deque
import sys

result = 0
n = int(sys.stdin.readline())
A = deque(list(map(int, sys.stdin.readline().split())))
B = deque(list(map(int, sys.stdin.readline().split())))

for i in set(A):
    result += (A.count(i)-B.count(i))

print(result)


# 문제.2 나중에 다시 푼 코드
n = int(input()) 
l = [0] * 1000001 
for i in list(map(int, input().split())): 
    l[i] += 1 
c = 0 
for i in list(map(int, input().split())): 
    if l[i] >= 1: l[i] -= 1 
    else: c += 1
print(c)


# 문제.3 
import sys

def aka(s):
    re_s = s[::-1]
    if len(s) == 1 : return 1

    if re_s == s:
        if aka(s[:len(s)//2]) == 1:
            return 1
    else:
        return 0

s = sys.stdin.readline().strip()
print("AKARAKA") if aka(s) == 1 else print('IPSELENTI')

# 와 이걸 재귀로 푸네 지렸다 



#
import sys

N,G,K = map(int, sys.stdin.readline().split())
arr = []
day = 0

for i in range(N):
    n,g,k = map(int, sys.stdin.readline().split())
    arr.append([n,g,k])

while(True):
    deg = 0
    for i in arr:
        deg += i[0]*max(1,day - i[1])
    arr.sort(key=lambda x:x[0]*max(1,day - x[1]))

    if K == 0 and G <= deg :
        print(day-1)
        break

    day += 1
    if G<= deg:
        arr.pop(0)
        K -= 1
