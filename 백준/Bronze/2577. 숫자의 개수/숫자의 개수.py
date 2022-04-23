a= int(input())
b= int(input())
c= int(input())

a =list(str(a*b*c))

for i in range(10):
    print(a.count(str(i)))