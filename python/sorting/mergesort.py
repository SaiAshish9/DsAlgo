def merge(a):
    if(len(a))>1:

        mid=len(a)//2
        a1=a[:mid]
        a2=a[mid:]

        merge(a1)
        merge(a2)
        i=0
        j=0
        k=0
        if len(a1)==0:
            return a2
        if len(a2)==0:
            return a1
        while i<len(a1) and j<len(a2):
            if (a1[i] < a2[j]):
                a[k]=a1[i]
                i+=1
            else:
                a[k]=a2[j]
                j+=1
            k+=1
        return a
a4=merge([1,3,5,2,4,7])
print(a4)
