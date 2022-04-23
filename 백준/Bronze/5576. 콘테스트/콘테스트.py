W = []
K = []

for i in range(10):
    W.append(int(input()))

for i in range(10):
    K.append(int(input()))

W = sorted(W,reverse=True)
K = sorted(K,reverse=True)

print(sum(W[:3]),sum(K[:3]))