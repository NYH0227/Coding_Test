a,b,v=map(int,input().split())
Locate = v-a
today = 0

if Locate % (a-b) == 0:
    today = int(Locate/(a-b))
else:
    today = int(Locate/(a-b)+1)

print(today + 1)