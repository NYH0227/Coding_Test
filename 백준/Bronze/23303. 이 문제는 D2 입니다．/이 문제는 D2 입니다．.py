import sys

result = 'unrated'
n = sys.stdin.readline().lower()

for index, i in enumerate(n):
    if n[index] == 'd' and n[index+1] == '2':
        result = 'D2'
        break

print(result)