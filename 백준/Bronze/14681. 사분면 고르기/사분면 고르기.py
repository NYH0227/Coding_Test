a = int(input())
b = int(input())

if a>0 and b>0:
    result = 1
elif a<0 and b>0:
    result = 2
elif a>0 and b<0:
    result = 4
elif a<0 and b<0:
    result = 3

print(result)