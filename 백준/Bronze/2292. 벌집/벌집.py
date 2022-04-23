n = int(input())

count = 1
while n>1:
    n -= count*6
    count +=1
print(count)