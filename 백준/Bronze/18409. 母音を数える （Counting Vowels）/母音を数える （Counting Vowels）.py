mo = ['a','i','u','e','o']
n = int(input())
s = input()

for i in mo: 
    s = s.replace(i,'*')

print(s.count('*'))