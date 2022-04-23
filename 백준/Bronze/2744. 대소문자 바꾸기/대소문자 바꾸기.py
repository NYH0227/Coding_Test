S=input()
result=[]

for i in S:
    if i >='a' and i<='z':
        result+=i.upper()
    else:
        result+=i.lower()
        
print(''.join(result))