"""
    Prim's Algorithm to Python.
    Name : Md. Anas Mondol
    ID : 1935202011
    Batch : 52nd-(A)
    Program : B.Sc In CSE(Day)
    City University, Permanent Campus.
"""

INF = 999999

number = 5

Graph = [[0, 19, 5, 0, 0],
         [19, 0, 5, 9, 2],
         [5, 5, 0, 1, 6],
         [0, 9, 1, 0, 1],
         [0, 2, 6, 1, 0]
]

selected_node = [0, 0, 0, 0, 0]

number_edge = 0

selected_node[0] = True

print('Edge : Weight')
while number_edge < number -1 :

    minimum = INF
    a = 0
    b = 0

    for i in range (number) :

        if selected_node[i] :

            for j in range (number) :

                if not selected_node[j] and Graph[i][j] :

                    if minimum > Graph[i][j] :

                        minimum = Graph[i][j]

                        a = i
                        b = j

    print( str(a) + "-" + str(b) + " : " + str(Graph[a][b]))

    selected_node[b] = True
    number_edge +=1












