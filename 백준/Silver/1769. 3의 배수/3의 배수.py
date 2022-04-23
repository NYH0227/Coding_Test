A = list(map(int,input()))

count = 0

while len(A) >= 2:
    count += 1
    B = list(str(sum(A)))
    A = [int(i) for i in B]

print(count)
if A[0] % 3 == 0:
    print("YES")
else:
    print("NO")