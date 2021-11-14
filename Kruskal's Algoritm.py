"""
    Kruskal's Algorithm to Python.
    Name : Md. Anas Mondol
    ID : 1935202011
    Batch : 52nd-(A)
    Program : B.Sc In CSE(Day)
    City University, Permanent Campus.
"""

def find(i):

    while parent[i] != i:

        i = parent[i]

    return i

def union(i, j):

    a = find(i)
    b = find(j)

    parent[a] = b

def kruskal(cost):

    mincost= 0

    for i in range(V):
        parent[i] = i

    count_edge = 0
    while count_edge < V-1:

        min = INF
        a = -1
        b =-1

        for i in range(V):
            for j in range(V):

                if find(i) != find(j) and cost[i][j] < min:

                    min = cost[i][j]
                    a= i
                    b = j
        union(a, b)
        print('\nEdge {} : ({}, {}) cost : {} '.format(count_edge, a, b, min))
        count_edge +=1
        mincost += min

    print("\nMinimum Cost : {}".format(mincost))

V = 5
parent = [i for i in range(V)]
INF = float('inf')

cost = [[INF, 2, INF, 6, INF],
        [2, INF, 3, 8, 5],
        [INF, 3, INF, INF, 7],
        [6, 8, INF, INF, 9],
        [INF, 5, 7, 9, INF]]

kruskal(cost)


















