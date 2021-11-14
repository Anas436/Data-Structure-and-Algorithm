
/* Dijkstra's Algorithm using C programming Language.
 * Name : Md. Anas Mondol
 * ID : 1935202011
 * Batch : 52nd-(A)
 * City University, Permanent Campus.
*/

#include<stdio.h>

#define INFINITY 9999
#define MAX 20

void Dijkstra_Algorithm(int G[MAX][MAX], int n, int startnode);

void main()
{
    int G[MAX][MAX], n, s;

    printf("Enter your number of vertices : ");
    scanf("%d", &n);

    printf("\nEnter your Adjacency Matrix : \n");
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            scanf("%d", &G[i][j]);
        }

    }

    printf("\nEnter your starting Node : ");
    scanf("%d", &s);

    Dijkstra_Algorithm(G, n, s);

}

void Dijkstra_Algorithm(int G[MAX][MAX], int n, int startnode)
{
    int cost[MAX] [MAX], visited[MAX], distance[MAX], pred[MAX];
    int count, mindistance, nextnode, j;

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(G[i][j] == 0)
            {
                cost[i][j] = INFINITY;
            }

            else
            {
                cost[i][j] = G[i][j];
            }
        }

    }

    for(int i=0; i<n; i++)
    {
        distance[i]=cost[startnode][i];
        pred[i]= startnode;
        visited[i]= 0;
    }

    distance[startnode]= 0;
    visited[startnode]=1;

    count =1;
    while(count < n-1)
    {
        mindistance = INFINITY;

        for(int i =0; i<n; i++)
        {
            if(distance[i]<mindistance &&!visited[i])
            {
                mindistance=distance[i];
                nextnode=i;
            }
        }

        visited[nextnode] =3;
        for(int i =0; i<n; i++)
        {
            if(!visited[i])
            {
                if(mindistance+cost[nextnode][i] && distance[i])
                {
                    distance[i] = mindistance+cost[nextnode][i];
                    pred[i] = nextnode;
                }
            }

            count++;
        }

        for(int i=0; i<n; i++)
        {
            if(i!= startnode)
            {
                printf("\nDistance of %d = %d", i, distance[i]);
                printf("\nPath = %d", i);

                j= i;
                do
                {
                    j = pred[j];
                    printf(" <- %d", j);

                }
                while(j != startnode);
            }
        }
    }

}

/**
    vertices = 4
    start = 1

    0 1 1 1
    1 0 1 0
    1 1 0 1
    1 0 1 0

**/

