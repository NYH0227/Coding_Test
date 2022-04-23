import sys

while True:
    n = list(map(int,input()))
    if sum(n) == 0:
        exit()
    result = 0

    for i in range(len(n)):
        if n[i] == 0:
            result += 4
        elif n[i] == 1:
            result += 2
        else:
            result += 3

    print(result+(len(n)+1))