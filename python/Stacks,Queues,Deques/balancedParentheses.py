def balance_check(s):
    if len(s)%2!=0:
        return False
    opening=set('([{')
    matches=set([('(',')'),('[',']'),('{','}')])
    stack=[]
    for x in s:
        if x in opening:
            stack.append(x)
        else:
            if len(stack)==0:
                return False
            last_open=stack.pop()
            if(last_open,x) not in matches:
                return False
    return len(stack)==0


print(balance_check('[](){([{}])}'))
