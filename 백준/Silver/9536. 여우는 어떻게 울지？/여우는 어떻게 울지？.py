for _ in range(int(input())):
       fox = list(map(str,input().split()))
       sound = []
       while(True):
           other = list(map(str, input().split()))
           if other[-1] == "say?": break
           sound.append(other[-1])
       
       for i in fox:
           if i not in sound:
                print(i,end=" ")
