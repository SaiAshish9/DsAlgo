class doublylinkedlist(object):
    def __init__(self,value):
        self.value=value
        self.next_node=None
        self.prev_node=None
a=doublylinkedlist(1)
b=doublylinkedlist(2)
c=doublylinkedlist(3)
a.next_node= b
b.prev_node = a
b.next_node= c
c.prev_node = b
print(b.prev_node.value)
