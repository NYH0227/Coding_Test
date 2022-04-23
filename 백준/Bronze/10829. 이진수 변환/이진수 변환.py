import math

a = int(input())

count = int(math.log2(a))+1
result = 0
i = 0

while i < count :
    i += 1
    result = result + (a%2)*10**(i-1)
    a=a//2
    
print(result)