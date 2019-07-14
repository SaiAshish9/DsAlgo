def permute(s):
    output=[]
    if(len(s))==1:
        output=s
    else:
        for i,x in enumerate(s):
            for p in permute(s[:i]+s[i+1:]):
                output+=[x+p]
    return output

print(permute('abc'))
print(list(enumerate('abcd')))
