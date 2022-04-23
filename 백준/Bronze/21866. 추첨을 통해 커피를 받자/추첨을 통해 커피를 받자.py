score = list(map(int, input().split()))
A_arr = [100, 100, 200, 200, 300, 300, 400, 400, 500]

flag = False
sum = 0

for i in range(len(score)):
    if score[i] > A_arr[i]:
        flag = True
        break
    else:
        sum += score[i]
if flag:
    print("hacker")


else:
    if sum >= 100:
        print("draw")
    else:
        print("none")
exit()