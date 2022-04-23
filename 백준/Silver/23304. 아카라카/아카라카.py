import sys

def aka(s):
    re_s = s[::-1]
    if len(s) == 1 : return 1

    if re_s == s:
        if aka(s[:len(s)//2]) == 1:
            return 1
    else: return 0
s = sys.stdin.readline().strip()
print("AKARAKA") if aka(s) == 1 else print('IPSELENTI')
