n = int(input())
m = int(input())
s = input()
result = cnt = i = 0
while i<m-2:
    if s[i] == "I" and s[i+1] == "O" and s[i+2] == "I":
        cnt += 1
        if cnt == n:
            cnt -= 1
            result += 1
        i += 2
    else:
        cnt = 0
        i += 1
print(result)
