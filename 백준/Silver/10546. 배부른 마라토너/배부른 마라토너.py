from collections import defaultdict
import sys
if __name__ == '__main__':
    n = int(sys.stdin.readline())
    s = defaultdict(int)

    for i in range(n): s[sys.stdin.readline().strip()]+=1

    for i in range(n-1): s[sys.stdin.readline().strip()]-=1

    for i in s:
        if s[i]%2 == 1:
            print(i)