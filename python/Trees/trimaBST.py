import collections
class Node:
    def __init__(self, val=None):
        self.left = None
        self.right = None
        self.val = val
    def level(tree):
        if not tree:
            return
        nodes=collections.deque([tree])
        currentcount=1
        next=0
        while len(nodes)!=0:
            current=nodes.popleft()
            currentcount=currentcount-1
            if  current.val!=None:
                print(current.val,end=" ")
            if current.left:
                nodes.append(current.left)
                next+=1
            if current.right:
                nodes.append(current.right)
                next+=1
            if currentcount==0 :
                print('\n')
                currentcount,next=next,currentcount
def trim(tree,min,max):
    if not tree:
        return
    tree.left=trim(tree.left,min,max)
    tree.right=trim(tree.right,min,max)

    if min<=tree.val<=max:
        return tree
    if tree.val< min:
        return tree.right
    if tree.val> max:
        return tree.left
# for a simple tree
root=Node(1)
root.left=Node(3)
root.right=Node(8)
root.left.left=Node(2)

if root.level()!=None or trim(root,0,5).level()!=None :
    print(root.level())
    print(trim(root,0,5).level())
