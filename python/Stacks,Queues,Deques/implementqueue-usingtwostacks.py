class queue2stacks(object):

    def __init__(self):
        self.stack1=[]
        self.stack2=[]

    def enqueue(self,x):
        self.stack1.append(x)
    def dequeue(self):
        if not self.stack2:
            while self.stack1:
                self.stack2.append(self.stack1.pop())
        return self.stack2.pop()


q=queue2stacks()

for i in range(5):
    q.enqueue(i)

for i in range(5):
    print(q.dequeue())
