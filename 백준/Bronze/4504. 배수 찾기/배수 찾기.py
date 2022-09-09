n = int(input())

while(1):
        a = int(input())
        if a == 0 : break
        print("{} is NOT a multiple of {}.".format(a,n)) if a%n != 0 else print("{} is a multiple of {}.".format(a,n))