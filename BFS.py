
  #Breadth First Search(BFS) in Algorithms using Python programming Language.
  #Name : Md. Anas Mondol
  #ID : 1935202011
  #Batch : 52nd-(A)
  #City University, Permanent Campus.

# This dictionaries using for all nodes and vertices.
Graph = {
    'A' : ['B', 'C'],
    'B' : ['C', 'D', 'E'],
    'C' :['F', 'G'],
    'D' : ['G'],
    'E' : ['F'],
    'F' : [],
    'G' : []

}

Visited = [] # This List used for visited nodes.
Queue = [] # This queue used for storing nodes.

def BFS (Visited, Graph, Node): #This function used for Breadth First Search.
    Visited.append(Node)   #Append method used for a single argument-
    Queue.append(Node)     # appending in Visited and queue List.

    while Queue :      #Created this loops for visit all nodes.
        anas = Queue.pop(0)  # Again remove visited nodes.
        print(anas, end = " ")

        for vertices in Graph[anas]: #This loops will check has any not visited nodes.
            if vertices not in Visited :
                Visited.append(vertices)  # Again will append both list Queue and Visited.
                Queue.append(vertices)

#Driver code.
print("Your Expected Breadth First Search of Graph : ")
BFS(Visited, Graph,'A') #Function calling with I wish visit first node.


