coin = [1, 2, 5, 7]

n = int(input())
s = [n] * (n+1)
s[0] = 0

for i in range(1, n+1):
    for c in coin:
        if c <= i and s[i-c] + 1 < s[i]:
            s[i] = s[i-c] + 1
print(s[-1])
