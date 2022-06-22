import re
import sys

input = sys.stdin.readline

n = input()
s = re.sub("[a,e,i,o,u]","",n)
print(len(n)-len(s))