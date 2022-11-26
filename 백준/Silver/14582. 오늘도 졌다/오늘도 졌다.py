j = list(map(int,input().split()))
s = list(map(int,input().split()))
jTeam,sTeam,flag = 0,0,0
for i in range(len(j)):
    jTeam += j[i]
    if jTeam > sTeam : flag = 1
    sTeam += s[i]

print("Yes") if jTeam < sTeam and flag else print("No")