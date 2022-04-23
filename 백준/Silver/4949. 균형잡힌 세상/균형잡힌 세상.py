while True:
    s = input()
    if s == '.': break

    stack = []
    ch = True
    for i in s:
        if i == '(' or i == '[': stack.append(i)
        elif i == ')':
            if len(stack) == 0 or stack.pop() != '(':
                ch = False
                break
        elif i == ']':
            if len(stack) == 0 or stack.pop() != '[':
                ch = False
                break
    
    if len(stack) == 0 and ch:
        print('yes')
    else:
        print('no')