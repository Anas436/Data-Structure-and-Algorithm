
  #Depth First Search(DFS) in Algorithms using Recursion and Data Structures like-
  #Dictionaries and Sets in Python Programming Language.
  #Name : Md. Anas Mondol
  #ID : 1935202011
  #Batch : 52nd-(A)
  #City University, Permanent Campus.

# This dictionaries using for all nodes and vertices as an adjacency list.
Graph = {
    'A' : ['B', 'C'],
    'B' : ['C', 'D', 'E'],
    'C' :['F', 'G'],
    'D' : ['G'],
    'E' : ['F'],
    'F' : [],
    'G' : []

 }

Visited = set() # This Set used to storing the Visited nodes of Graph.

def DFS(Visited, Graph, Node) : # This function used for Depth First Search.

    if Node not in Visited : # if conditions used whether any nodes of the Graph visited or not.
        print(Node)
        Visited.add(Node)  # If the condition is executed then will add visited Set of nodes.

        for vertices in Graph[Node] : # This loops going into the vertices of nodes-
            DFS(Visited, Graph, vertices) # again invoke the DFS function to used vertices.

# Driver Code.
print('Your Expected Depth First Search is : ')
DFS(Visited, Graph, 'A') # Again invoke the DFS function with starting points of Nodes.
