def fectorial(i):
    if i==0 or i ==1:
        return 1
    else:
        return i * fectorial(i-1)


N = int(input())

print(fectorial(N))