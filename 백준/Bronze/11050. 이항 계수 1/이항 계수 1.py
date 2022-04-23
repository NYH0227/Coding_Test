from math import factorial as f

n, k = map(int, input().split())

print(int(f(n)/(f(n-k)*f(k))))