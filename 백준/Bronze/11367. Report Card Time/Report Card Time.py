def getGrade(n):
    if 97<=n<=100 : return "A+"
    if 90<=n<=96 : return "A"
    if 87<=n<=89 : return "B+"
    if 80<=n<=86 : return "B"
    if 77<=n<=79 : return "C+"
    if 70<=n<=76 : return "C"
    if 67<=n<=69 : return "D+"
    if 60<=n<=66 : return "D"
    if 0<=n<=59 : return "F"


for i in range(int(input())):
    a,b = map(str,input().split())
    print("{} {}".format(a,getGrade(int(b))))