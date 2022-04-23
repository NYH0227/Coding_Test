sw = ['WBWBWBWB','BWBWBWBW']

def solution(arr):
    mini = 32
    for k in range(2):
        cnt = 0
        flog = k  
        for i in range(0,8):
            for j in range(0,8):
                if arr[i][j] != sw[flog][j]:
                    cnt += 1                
            flog = (1 - flog)            
        mini = min(mini,cnt)    
    return mini

result = []
n,m = map(int, input().split())
array = [list(input()) for i in range(n)]

for i in range(0,n-8+1):
    for j in range(0,m-8+1):
        ex = [k[(0+j):(8+j)] for k in array[(0+i):(8+i)]]
        result.append(solution(ex))

print(min(result))