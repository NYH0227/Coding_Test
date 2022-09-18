mx = 0
for i in range(int(input())):
        a,b,c = map(int,input().split())
        mx = max(mx,a*(b+c)*2 if b+c == a else a*(b+c))

print(mx)