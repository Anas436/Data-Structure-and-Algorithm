
"""
    Multistage Graph Algorithm to Python.
    Name : Md. Anas Mondol
    ID : 1935202011
    Batch : 52nd-(A)
    Program : B.Sc In CSE(Day)
    City University, Permanent Campus.
"""

def ShortestPath(Graph):

    global INF

    path = [0]*N
    path[N-1]= 0

    for i in range(N-2, -1, -1):

        path[i]= INF


        for j in range(N):

            if Graph[i][j] == INF :

                continue

            path[i]= min(path[i], Graph[i][j]+path[j])


    return path[0]

N = 8

INF = 9999

Graph = [[INF, 1, 2, 5, INF, INF, INF, INF],
         [INF, INF, INF, INF, 4, 11, INF, INF],
         [INF, INF, INF, INF, 9, 5, 16, INF],
         [INF, INF, INF, INF, INF, INF, 2, INF],
         [INF, INF, INF, INF, INF, INF, INF, 18],
         [INF, INF, INF, INF, INF, INF, INF, 13],
         [INF, INF, INF, INF, INF, INF, INF, 2] ]

print('\nYour Expected Shortest Path : ', ShortestPath(Graph))



