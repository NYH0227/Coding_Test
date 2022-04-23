alpha = ["c=","c-","dz=","d-","lj","nj","s=","z="]

N = input()

for i in alpha:
    N = N.replace(i,"a")

print(len(N))