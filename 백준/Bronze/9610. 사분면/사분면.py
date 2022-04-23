T= int(input())
arr = [0,0,0,0]
axis = 0

for i in range(T):
    x, y = map(int, input().split())
    if x == 0 or y == 0:
        axis += 1
    elif x > 0 and y > 0:
        arr[0] += 1
    elif x > 0 and y < 0:
        arr[3] += 1
    elif x < 0 and y > 0:
        arr[1] += 1
    else:
        arr[2] += 1

for index,i in enumerate(arr):
    print("Q{}: {}".format(index+1,i))
print("AXIS:",axis)