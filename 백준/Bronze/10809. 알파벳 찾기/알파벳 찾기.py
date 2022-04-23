s = list(map(str,input()))

alpha = list('abcdefghijklmnopqrstuvwxyz')

array = [-1]*len(alpha)

for i in range(len(s)):
    if array[alpha.index(s[i])] == -1:
        array[alpha.index(s[i])] = i

for j in array:
    print(j, end=' ')