alpha = ["a", "b", "c", "d", "e", "f", "g", "h", "i", "j", "k", "l", "m", "n", "o", "p", "q", "r", "s", "t", "u", "v", "w", "x", "y", "z"]
arr = []

n = str(input())

for i in n :
    arr.append(i)

for i in alpha :
    print(arr.count(i), end = " ")