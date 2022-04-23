n = int(input())
a = input()

result = 0
for i in range(n):
    result += (ord(a[i])-96)*31**i
print(result % 1234567891)