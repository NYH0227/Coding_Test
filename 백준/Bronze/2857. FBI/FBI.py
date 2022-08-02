FBI = []

for i in range(1,6):
    s = input()
    if "FBI" in s: FBI.append(i)

if not FBI : print("HE GOT AWAY!")
else : print(*FBI)