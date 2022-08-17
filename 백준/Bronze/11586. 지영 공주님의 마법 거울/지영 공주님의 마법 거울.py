arr = []
for i in range(int(input())):
    arr.append(input())
mode = int(input())

if mode == 1:
    for i in arr:
        print(i)

elif mode == 2:
    for i in arr:
        print(i[::-1])
            
elif mode == 3:
    arr.reverse()
    for i in arr: print(i)
