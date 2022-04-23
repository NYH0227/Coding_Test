A,B = input().split()
A = int(A[::-1])
B = int("".join(reversed(B)))

if A>B:
    print(A)
else:
    print(B)