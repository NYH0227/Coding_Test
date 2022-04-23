n, m = map(int,input().split())
A = list(map(int,input().split()))
B = list(map(int,input().split()))

result = [i for i in A] + [j for j in B]
print(*sorted(result))