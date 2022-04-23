import sys
arr = list(map(int,sys.stdin.readline().split()))
print("Good") if arr == sorted(arr, reverse=False) else print("Bad")