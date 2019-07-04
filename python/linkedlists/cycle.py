class Node(object):
    def __init__(self,value):
        self.value=value
        self.nextNode=None

def cycle_check(node):
    marker1=node
    marker2 = node
    while marker2 != None and marker2.nextNode !=None:
        marker1=marker1.nextNode
        marker2=marker2.nextNode.nextNode
        if marker2==marker1:
            return True
    return False

a=Node(1)
b=Node(2)
c=Node(3)
a.nextNode=b
b.nextNode=c
c.nextNode=a
x=Node(1)
y=Node(2)
z=Node(3)
x.nextNode=y
y.nextNode=z
print(x.value,y.value,z.value)
