num = 0
max = 0
for i in range(5):
        score = list(map(int, input().split()))
        sum = 0
        
        for j in range(4):
            sum = sum + score[j]

        if(max < sum):
            max = sum
            num = i+1

print(num, max)