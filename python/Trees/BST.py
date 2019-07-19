import collections
class Node:

    def __init__(self, val):

        self.left = None
        self.right = None
        self.val = val

    def insert(self, val):
        if self.val:
            if val < self.val:
                if self.left is None:
                    self.left = Node(val)
                else:
                    self.left.insert(val)
            elif val > self.val:
                if self.right is None:
                    self.right = Node(val)
                else:
                    self.right.insert(val)
        else:
            self.val = val
    def lookup(self, val, parent=None):
        if val < self.val:
            if self.left is None:
                return None, None
            return self.left.lookup(val, self)
        elif val > self.val:
            if self.right is None:
                return None, None
            return self.right.lookup(val, self)
        else:
            return self, parent
    def delete(self, val):
        node, parent = self.lookup(val)
        if node is not None:
            children_count = node.children_count()
        if children_count == 0:
            if parent:
                if parent.left is node:
                    parent.left = None
                else:
                    parent.right = None
                del node
            else:
                self.val = None
        elif children_count == 1:
            if node.left:
                n = node.left
            else:
                n = node.right
            if parent:
                if parent.left is node:
                    parent.left = n
                else:
                    parent.right = n
                del node
            else:
                self.left = n.left
                self.right = n.right
                self.val = n.val
        else:
            parent = node
            successor = node.right
            while successor.left:
                parent = successor
                successor = successor.left
                node.val = successor.val
            if parent.left == successor:
                parent.left = successor.right
            else:
                parent.right = successor.right
    def children_count(self):
        cnt = 0
        if self.left:
            cnt += 1
        if self.right:
            cnt += 1
        return cnt

    def print_tree(self):
        if self.left:
            self.left.print_tree()
        print(self.val)
        if self.right:
            self.right.print_tree()
    def tree_val(self):

        stack = []
        node = self
        while stack or node:
            if node:
                stack.append(node)
                node = node.left
            else:
                node = stack.pop()
                yield node.val
                node = node.right
    def level(tree):
        if not tree:
            return " "
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
root = Node(8)
root.insert(3)
root.insert(10)
root.insert(1)
root.insert(6)
root.insert(4)
root.insert(7)
root.insert(14)
root.insert(13)
# root.delete(1)
root.print_tree()
print('\n')
# node, parent = root.lookup(6)
# i=1
print(list(root.tree_val()),'\n')
# root=root.lookup(1)
if root.level()!=None:
    print(root.level())
