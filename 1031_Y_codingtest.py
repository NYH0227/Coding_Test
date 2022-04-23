import sys

result = 'unrated'
n = sys.stdin.readline()
n = n.lower()
for index, i in enumerate(n):
    if n[index] == 'd' and n[index+1] == '2':
        result = 'D2'
        break

print(result)


import sys
result = 0

n = int(sys.stdin.readline())
A = list(map(int, sys.stdin.readline().split()))
B = list(map(int, sys.stdin.readline().split()))

for e in A:
    if e in B:
        B.remove(e)
    else:
        result += 1
    
print(result)

from collections import deque
import sys

result = 0
n = int(sys.stdin.readline())
A = deque(list(map(int, sys.stdin.readline().split())))
B = deque(list(map(int, sys.stdin.readline().split())))

for i in set(A):
    result += (A.count(i)-B.count(i))

print(result)

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

import sys
from collections import deque

def BN(a,b):
    print(list_m[a])
    print()

def BP(a,b):
    pass

def CP(a):
    pass

def CN(a):
    pass

n,m = map(int,sys.stdin.readline().split())
list_m = list(map(int, sys.stdin.readline().split()))

for i in range(n):
    func = list(map(str, sys.stdin.readline().split()))
    
    if func[0] == 'BN':
        BN(func[1],func[2])
    elif func[0] =='BP':
        BP(func[1],func[2])
    elif func[0] =='CP':
        CP(func[1])
    elif func[0] =='CN':
        BN(func[1])
    






