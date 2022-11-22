s = input()
o1,o2 = 0,0
for i in range(len(s)-2):
    if s[i:i+3]=="JOI": o1 += 1
    if s[i:i+3]=="IOI": o2 += 1
print("{}\n{}".format(o1,o2))