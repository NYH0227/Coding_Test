n = int(input())
arr = list(input())
result = [0,0]
for i in arr:
    if i == 'e': 
        result[1] += 1
    else :
        result[0] += 1
if result[0] == result[1]:
    print('yee')
elif result[0] >= result[1]:
    print('2')
elif result[0] <= result[1]:
    print('e')