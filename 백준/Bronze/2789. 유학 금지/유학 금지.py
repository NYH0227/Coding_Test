arr = 'CAMBRIDGE'
n = input()
for i in arr:
    if i in n: n = n.replace(i,'').strip()

print(n)