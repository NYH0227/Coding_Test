for i in range(int(input())):
    a = sorted(list(map(int,input().split()))[1:])
    g = [a[i+1]-a[i] for i in range(len(a)-1)]
    print("Class {}\nMax {}, Min {}, Largest gap {}".format(i+1,a[-1],a[0],max(g)))
