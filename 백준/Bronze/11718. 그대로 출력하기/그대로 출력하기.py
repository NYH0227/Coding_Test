for i in range(100):
    try:
        print(input())
    except EOFError:
        break