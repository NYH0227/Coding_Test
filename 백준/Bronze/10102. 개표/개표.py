n = int(input())
s = str(input())

X = Y = 0

for i in range(len(s)):
    if s[i] == 'A': X += 1
    else: Y += 1

if X > Y: print('A')
elif X < Y: print('B')
else: print('Tie')
