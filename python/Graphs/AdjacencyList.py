class Vertex:
    def __init__(self,key):
        self.id=key
        self.connectedTo={}
    def addNeighbour(self,n,weight=0):
        self.connectedTo[n]=weight
    def __str__(self):
        return str(self.id)+' connected to: ' +str([x.id for x in self.connectedTo])
    def getConnections(self):
        return self.connectedTo.keys()
    def getWt(self,n):
        return self.connectedTo[n]
class Graph:
    def __init__(self):
        self.vert={}
        self.num=0

    def add(self,key):
        self.num+=1
        newVertex=Vertex(key)
        self.vert[key]=newVertex
        return newVertex
    def get(self,n):
        if n in self.vert:
            return self.vert[n]
        else:
            return None

    def addEdge(self,f,t,cost=0):
        if f not in self.vert:
            nv=self.add(f)
        if t not in self.vert:
            nv=self.add(t)
        self.vert[f].addNeighbour(self.vert[t],cost)

    def getVertices(self):
        return self.vert.keys()

    def __iter__(self):
        return iter(self.vert.values())
    def __contains__(self,n):
        return n in self.vert

g=Graph()
for i in range(5):
    g.add(i)
print(list(g.vert))
g.addEdge(0,1,2)
for vertex in g:
    print(vertex)
    print(vertex.getConnections())
    print('\n')
