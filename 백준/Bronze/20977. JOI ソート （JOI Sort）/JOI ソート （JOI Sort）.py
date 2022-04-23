nSort = ('J','O','I')

n = int(input())
arr = list(map(str,input()))

for i in nSort:
    print(i*arr.count(i),end='')