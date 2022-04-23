face = [':-)',':-(']
face_count = [0,0]
arr = input().strip().replace(':',' :')
s = list(arr.split())
for i in s:
    if face[0] in i: face_count[0] += 1
    elif face[1] in i: face_count[1] += 1

if face_count[0] > face_count[1]:
    print('happy')
elif face_count[0] == face_count[1]:
    if face_count[0] == 0:
        print('none')
    else:
        print('unsure')
elif face_count[0] < face_count[1]:
    print('sad')