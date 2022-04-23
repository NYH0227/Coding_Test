month=int(input())
date=int(input())
print("Special" if month==2 and date==18 else "Before" if (month<=2 and date<18) or month==1 else "After" )
