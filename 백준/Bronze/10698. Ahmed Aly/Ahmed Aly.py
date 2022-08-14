for i in range(int(input())):
    s = list(input().split())

    if(s[1]=='+'):
        if int(s[0])+int(s[2]) == int(s[4]): res = "YES"
        else: res = "NO"
    else:
        if int(s[0]) - int(s[2]) == int(s[4]): res = "YES"
        else: res = "NO"
    print("Case {}: {}".format(i+1,res))