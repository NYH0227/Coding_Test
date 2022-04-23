n = int(input())

for i in range (1, n+1) :
    new = []
  
    for j in str(i):
        new.append(j)

    new_list = list(map(int, new))
    if n == sum(new_list)+i:
        print(i)
        break
    
    if i == n:
        print(0)