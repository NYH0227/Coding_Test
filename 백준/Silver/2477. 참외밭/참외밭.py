n = int(input())
arr = [[0,0]]
x,y = 0,0
for i in range(6):
    a,b = map(int,input().split())
    if a==1: x += b
    if a==2: x -= b 
    if a==3: y -= b
    if a==4: y += b
    arr.append([x,y])


A,B = 0,0
for i in range(len(arr)-1):
    A += arr[i][0] * arr[i+1][1]
    B += arr[i][1] * arr[i+1][0]

print(int(abs(A-B)*n*0.5))