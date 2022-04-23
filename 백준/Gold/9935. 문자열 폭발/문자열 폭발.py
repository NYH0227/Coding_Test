s = str(input())
k = str(input())
arr = []

for i in s:
    arr.append(i)
    if len(arr) >= len(k):
        s = "".join(arr[-len(k):])
        if s == k:
            for i in range(len(k)):
                arr.pop()


print("".join(arr)) if len(arr) != 0 else print("FRULA")