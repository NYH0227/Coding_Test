S = input()
if S == ' ':
    print(0)
else:
    print(len(S.strip().split(' ')))