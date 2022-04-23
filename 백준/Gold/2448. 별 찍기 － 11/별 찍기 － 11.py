arr = [ "  *   "," * *  ","***** "]
def star(myStar):
    l = len(myStar)
    s = [""] * (l*2)

    for i in range(l):
        s[i] += " "*l + myStar[i] + " "*l
    for i in range(l):
        s[l+i] += myStar[i] * 2
    return s

n = int(input())//3
k = 0
while n>1:
    n = n//2
    k+= 1

for i in range(k):
    arr = star(arr)
for i in arr:
    print(i)

