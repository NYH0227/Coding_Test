while True:
        s = list(map(str,input().split()))
        if s == ["#"] : break
        string = "".join(s[1:]).lower()
        print(s[0],string.count(s[0]))