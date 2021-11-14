
/* Bellman-Ford's Algorithm using C programming Language.
 * Name : Md. Anas Mondol
 * ID : 1935202011
 * Batch : 52nd-(A)
 * City University, Permanent Campus.
*/


#include <stdio.h>
#include <stdlib.h>

#define INFINITY 100000


struct Edge
{

    int source, destination, weight;

};


struct Graph
{
    int V, E;

    struct Edge* edge;

};


struct Graph* createGraph(int V, int E)
{
    struct Graph* graph = (struct Graph*) malloc( sizeof(struct Graph));


    graph->V = V;

    graph->E = E;

    graph->edge = (struct Edge*) malloc( graph->E * sizeof(struct Edge) );


    return graph;
}


void Display(int distance[], int n)
{

    printf("\nVertex\tDistance from Source Vertex\n");

    for (int i = 0; i < n; ++i)
    {
        printf("%d\t%d\n", i, distance[i]);
    }

}


void BellmanFord_Algorithm(struct Graph* graph, int source)
{

    int V = graph->V;

    int E = graph->E;

    int StoreDist[V];


    for (int i = 0; i < V; i++)
    {
        StoreDist[i] = INFINITY;

    }


    StoreDist[source] = 0;


    for (int i = 1; i <= V-1; i++)
    {
        for (int j = 0; j < E; j++)
        {
            int u = graph->edge[j].source;

            int v = graph->edge[j].destination;

            int weight = graph->edge[j].weight;


            if (StoreDist[u] + weight < StoreDist[v])
            {

                StoreDist[v] = StoreDist[u] + weight;

            }

        }
    }


    for (int i = 0; i < E; i++)
    {

        int u = graph->edge[i].source;

        int v = graph->edge[i].destination;

        int weight = graph->edge[i].weight;


        if (StoreDist[u] + weight < StoreDist[v])
        {

            printf("This graph contains negative edge cycle\n");

        }

    }

    Display(StoreDist, V);

}


int main()
{
    int V,E,S;

    printf("\nEnter your number of Vertices : ");
    scanf("%d",&V);

    printf("\nEnter your number of Edges : ");
    scanf("%d",&E);

    printf("\nEnter your number of Source Vertex : ");
    scanf("%d",&S);

    struct Graph* graph = createGraph(V, E);


    for(int i=0;i<E; i++)
    {
        printf("\nEnter your Edge [%d] values of Source, Destination, Weight : \n",i+1);

        scanf("%d",&graph->edge[i].source);
        scanf("%d",&graph->edge[i].destination);
        scanf("%d",&graph->edge[i].weight);

    }

    BellmanFord_Algorithm(graph, S);

    return 0;

}

