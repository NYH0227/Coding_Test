s = input()
arr = []
for i in range(len(s)): arr.append(s[i:])

arr = sorted(arr)
for i in arr: print(i)
