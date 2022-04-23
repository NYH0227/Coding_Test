A = int(input())
B = int(input())
C = int(input())
D = int(input())
P = int(input())

x_sum = P*A
y_sum = 0

if (P <= C): y_sum = B
else: y_sum = B + (P - C) * D

if (x_sum > y_sum): print(y_sum)
else: print(x_sum)