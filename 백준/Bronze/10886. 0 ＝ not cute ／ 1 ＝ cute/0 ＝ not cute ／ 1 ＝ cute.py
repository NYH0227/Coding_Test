n = int(input())
c = [0,0]
for i in range(n):
    if int(input()) == 0: c[0] += 1
    else : c[1] += 1

print("Junhee is not cute!") if c[1]<c[0] else print("Junhee is cute!")


