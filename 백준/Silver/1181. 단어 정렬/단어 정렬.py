import sys
n=int(sys.stdin.readline())

word_list=[]
for i in range(n):
    word=input()
    word_list.append((word,len(word)))
    
word_list=list(set(word_list))
word_list.sort(key=lambda word: (word[1],word[0]))

for value in word_list:
    print(value[0])

