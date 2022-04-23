while (True):
    a, b = map(int, input().split())
    if (a == 0 and b == 0): break

    i = 0
    while i**b < a:
        i += 1
    print(i if i**b-a < a-(i-1)**b else i-1)
