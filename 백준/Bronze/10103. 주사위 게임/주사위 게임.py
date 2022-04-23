n = int(input())
aScore = 100
bScore = 100
for i in range(n):
    A, B = map(int, input().split())
    if A > B:
        bScore -= A
    elif A < B:
        aScore -= B
print(aScore)
print(bScore)