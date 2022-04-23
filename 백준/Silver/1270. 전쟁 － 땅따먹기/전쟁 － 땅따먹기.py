import sys
from collections import Counter

def war(arr):
    cnt = Counter(arr)
    nov = list(cnt.most_common())
    if len(nov)==1:
        return arr[0]
    if nov[0][1] == nov[1][1]:
        return "SYJKGW"
    elif nov[0][1] > len(arr)/2:
        return int(nov[0][0])
    else :
        return "SYJKGW"


n = int(sys.stdin.readline())
for i in range(n):
    array = list(map(int,sys.stdin.readline().split()))


    print(war(array[1:]))