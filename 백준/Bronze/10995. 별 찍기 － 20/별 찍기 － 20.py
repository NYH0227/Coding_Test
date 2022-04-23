n = int(input())

for i in range(n):
    if i%2 == 1 : print(end=' ')
    for j in range(n): print('*', end= ' ')
    print()
    