import sys
from functools import cmp_to_key

input = sys.stdin.readline

def cmp(a,b):
    if int(a+b) < int(b+a): return 1
    else: return -1


n = int(input())
arr = list(map(str,input().split()))


arr = sorted(arr,key = cmp_to_key(cmp))


result = ''.join(arr)
print(int(result))

# 출처 https://blog.naver.com/jooin2000/222504605196