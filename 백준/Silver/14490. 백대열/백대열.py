import math

a,b = map(int,input().split(":"))
s = math.gcd(a,b)
print("{}:{}".format(int(a/s),int(b/s)))