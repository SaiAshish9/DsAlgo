def merge(a1,a2):
    i=1
    j=1
    a1Item=a1[0]
    a2Item=a2[0]
    if len(a1)==0:
        return a2
    if len(a2)==0:
        return a1
    a3=[]
    while (a1Item or a2Item):
        if not a2Item or (a1Item < a2Item):

             a3.append(a1Item)
             a1Item=a1[i]
             i+=1
        else:
            a3.append(a2Item)
            a2Item=a2[j]
            j+=1
    return a3
print(merge([1,3,5],[2,4,7]))
