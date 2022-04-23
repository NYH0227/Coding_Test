import sys
from collections import Counter

n = int(input())
N_arr = [int(sys.stdin.readline()) for i in range(n)]
N_arr.sort()


print(round(sum(N_arr)/len(N_arr))) #1
print(N_arr[len(N_arr)//2]) #2

mode_dict = Counter(N_arr)
modes = mode_dict.most_common()    
    
if len(N_arr) > 1 : 
    if modes[0][1] == modes[1][1]:
        result = modes[1][0]
    else : 
        result = modes[0][0]
else : 
    result = modes[0][0]

print(result) #3

print(max(N_arr)-min(N_arr)) #4