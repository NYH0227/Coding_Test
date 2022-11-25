for _ in range(int(input())):
    a = sorted(map(int,input().split()))[1:-1]
    print(sum(a)) if a[-1]-a[0] < 4 else print("KIN") 