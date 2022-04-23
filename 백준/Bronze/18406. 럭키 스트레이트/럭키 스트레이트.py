n = input()
l = 0
r = 0

for i in range(len(n)//2):
    l += int(n[:len(n)//2][i])
    r += int(n[len(n)//2:][i])

print("LUCKY") if l==r else print("READY")