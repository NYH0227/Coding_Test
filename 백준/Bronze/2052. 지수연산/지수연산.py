n = int(input())
a = '%.300f' %(1/(2**n))
print(str(a).rstrip('0'))