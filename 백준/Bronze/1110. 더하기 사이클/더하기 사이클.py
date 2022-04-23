count = 0
N = int(input())
if N<10:
    N = N*10

result = N

while True:

    result = (result%10)*10+((result//10)+(result%10))%10
    
    count += 1
    if result == N and count !=0:
        break

print(count)
