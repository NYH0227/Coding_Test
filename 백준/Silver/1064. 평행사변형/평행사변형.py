import math

xa,ya,xb,yb,xc,yc = map(int, input().split())

n = []
n.append(math.sqrt((xc - xa) ** 2 + (yc - ya) ** 2) + math.sqrt((xb - xa) ** 2 + (yb - ya) ** 2))
n.append(math.sqrt((xb - xc) ** 2 + (yb - yc) ** 2) + math.sqrt((xb - xa) ** 2 + (yb - ya) ** 2))
n.append(math.sqrt((xa - xc) ** 2 + (ya - yc) ** 2) + math.sqrt((xb - xc) ** 2 + (yb - yc) ** 2))

if(ya-yb)*(xc-xb)==(yc-yb)*(xa-xb): print("-1")
else: print(max(n)*2-min(n)*2)