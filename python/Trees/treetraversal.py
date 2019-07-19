class BinaryTree(object):
    def __init__(self,r):
        self.key= r
        self.left=None
        self.right=None
    def insertleft(self,newNode):
        if self.left==None:
            self.left=BinaryTree(newNode)
        else:
            t=BinaryTree(newNode)
            t.left=self.left
            self.left=t

    def insertright(self,newNode):
            if self.right==None:
                self.right=BinaryTree(newNode)
            else:
                t=BinaryTree(newNode)
                t.right=self.right
                self.right=t
    def getRight(self):
        return self.right
    def getLeft(self):
        return self.left
    def get(self):
        return self.key
    def set(self,obj):
        self.key=obj
r=BinaryTree('a')
# print(r.get())
# (r.insertleft('b'))
# print(r.getLeft().get())
# (r.insertright('c'))
# print(r.getRight().get())
def preorder(tree):
    if tree:
        print(tree.get())
        preorder(tree.getLeft())
        preorder(tree.getRight()
# postorder ,inorder
print(preorder(r))
print(r.get())
