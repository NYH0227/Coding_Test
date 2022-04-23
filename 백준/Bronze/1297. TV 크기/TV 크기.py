c, w, h = map(int,input().split())
r=c/((w**2+h**2)**0.5)
print(int(w*r),int(h*r))
