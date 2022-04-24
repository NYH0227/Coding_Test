# 쇼미더코드 : 원티드 주관 코딩테스트 대회
# ('22년 1회차)
# 1번과 3번만 제출해봤지만 두 개다 실패

 
 # 1번
import sys
from itertools import permutations as pm

input = sys.stdin.readline

n = int(input())
c = list(map(int,input().split()))

p = []
coin = [sum(c)]
for i in range(n):
    x= int(input())
    l = []
    for j in range(x):
        a,b = map(int,input().split())
        l.append([a,b])
    p.append(l)

result = list(pm(p, n))
for i in result:
    cc = list(c)
    for j in i:
        for x in range(len(j)):
            cc[j[x][0]-1] -= j[x][1]
            if cc[j[x][0]-1] <= 0 : cc[j[x][0]-1] = 1
            coin.append(sum(cc))  
        print(cc)
print(min(coin))



# 3번
import sys
from itertools import combinations as cb

input = sys.stdin.readline
 
l = ['W','H','E']    
cnt = 0

n = int(input())
s = input().strip()

for i in range(4,n):
    l.append('E')
    r = tuple(l)

    arr = list(cb(s,i))

    for x in arr:
        if x == r : cnt += 1
print(cnt%1000000007)


 
##### input & output

# 1번
# input
# 4
# 10 15 20 25
# 2
# 3 10
# 2 20
# 0
# 1
# 4 10
# 1
# 1 10
# output
# 36

# 3번
# input
# 8
# WAHEWHEE
# output
# 6
