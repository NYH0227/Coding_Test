T = int(input())

for i in range(T):
    a,b = map(str,input().split())
    print("{}".format(b)*int(a))