n = int(input())
sum1 = 0
sum2 = 0
for i in range(n):
    sum1 += i

for i in range(1,n+1):
    sum2 += i

if sum1%2 == 0 and sum2%2 == 0:
    print('Even')
elif sum1%2 != 0 and sum2%2 != 0:
    print('Odd')
else:
    print('Either')