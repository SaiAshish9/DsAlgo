def rev1(str):
    return " ".join((str.split()[::-1]))
def rev(s):
    words=[]
    length=len(s)
    space=[' ']
    i=0
    while i<length:
        if s[i] not in space:
            start=i
            while i<length and s[i] not in space:
                i+=1
            words.append(s[start:i])
        i+=1
    return " ".join(reversed(words))
print(rev("this is sai"))
print(rev1("this is sai "))
