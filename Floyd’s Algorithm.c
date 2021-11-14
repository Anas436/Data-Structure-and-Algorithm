
/* Floyd’s Algorithm using C programming Language.
 * Name : Md. Anas Mondol
 * ID : 1935202011
 * Batch : 52nd-(A)
 * City University, Permanent Campus.
*/

#include<stdio.h>

#define INFINITY 9999

int min(int, int);


void Floyd_Algorithm(int G[50][50], int n)
{

    int i, j, k;

    for(k=1; k<=n; k++)
    {
        for(i=1; i<=n; i++)
        {
            for(j=1; j<=n; j++)
            {
                if(i==j)
                {
                    G[i][j]=0;
                }

                else
                {
                    G[i][j]= min(G[i][j], G[i][k]+G[k][j]);
                }
            }
        }
    }

}


int min(int a, int b)
{

    if(a<b)
    {
        return(a);
    }

    else
    {
        return(b);
    }

}

void main()
{

    int G[50][50];
    int e, u, v, w;
    int n, i, j;


    printf("\nEnter your number of vertices : ");
    scanf("%d", &n);

    printf("\nEnter your number of edges : ");
    scanf("%d", &e);

    for(i=1; i<=n; i++)
    {

        for(j=1; j<=n; j++)
        {
            G[i][j] = INFINITY;
        }

    }


    for(i=1; i<=e; i++)
    {
        printf("\nEnter your Source->Destination<->Weight of Edge[%d] : \n", i);
        scanf("%d%d%d", &u, &v, &w);

        G[u][v]=w;

    }


   printf("\n\nYour Matrix input data : \n\n");

   for(i=1; i<=n; i++)
   {
       for(j=1; j<=n; j++)
       {
           printf("%d \t", G[i][j]);
       }

       printf("\n");
   }


   Floyd_Algorithm(G, n);


   printf("\n\nYour All Pairs Shortest Path Outcome : \n\n");

   for(i=1; i<=n; i++)
   {
       for(j=1; j<=n; j++)
       {
           printf("%d \t", G[i][j]);
       }

       printf("\n");
   }

}
