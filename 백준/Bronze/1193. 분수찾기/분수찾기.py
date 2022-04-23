N = int(input())

agree = 1
while N >agree:
    N -= agree
    agree +=1

x=N
y=agree-N+1
if agree % 2 == 1:
    x, y = y ,x


print("{0}/{1}".format(x,y))