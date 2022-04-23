arr = []
s = 0
re = []
for i in range(8): 
    n = int(input())
    arr.append([n,i+1])

arr = sorted(arr,key=lambda x : x[0],reverse=True)[:5]
for i in arr:
    s += i[0]
    re.append(i[1])

print(s)
print(*sorted(re))