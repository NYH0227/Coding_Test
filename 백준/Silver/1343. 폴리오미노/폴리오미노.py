import re

s = input()
s = re.sub("XXXX","AAAA",s)
s = re.sub("XX","BB",s)

if "X" in s: print("-1")
else: print(s)