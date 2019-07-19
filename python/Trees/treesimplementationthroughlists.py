def BinaryTree(r):
    return [r,[],[]]
def left(r,newBranch):
    t=r.pop(1)
    if len(t)>1:
        r.insert(1,[newBranch,t,[]])
    else:
        r.insert(1,[newBranch,[],[]])
    return r
def right(r,newBranch):
    t=r.pop(2)
    if len(t)>1:
        r.insert(2,[newBranch,[],t])
    else:
        r.insert(2,[newBranch,[],[]])
    return r
def get(r):
    return r[0]
def set(r,val):
    r[0]=val
def getleft(r):
    return r[1]
def getright(r):
    return r[2]
r=BinaryTree(3)
print(left(r,4))
print(left(r,6))
print(right(r,7))
print(set(r,9))
print(r)
