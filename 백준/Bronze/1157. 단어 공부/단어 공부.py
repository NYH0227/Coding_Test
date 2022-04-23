S = input().upper()

S_list = list(set(S))
a = []
for i in S_list:
    a.append(S.count(i))

if a.count(max(a)) > 1:
    print("?")
else:
    print(S_list[a.index(max(a))])