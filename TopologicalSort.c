
/* Topological Sort in Algorithms using C programming Language.
 * Name : Md. Anas Mondol
 * ID : 1935202011
 * Batch : 52nd-(A)
 * City University, Permanent Campus.
*/

#include<stdio.h>

void main()
{
    int i, j, k, num, arr[50][50], indegree[50], flag[50], count = 0;

    printf("\nEnter your number of vertices : ");
    scanf("%d", &num);

    printf("\nYour Expected adjacency matrix are :- ");

    for(i=0; i<num; i++)
    {
        printf("\n\nEnter your number of row [%d] : ",i+1);

        for(j=0; j<num; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }


    for(i=0; i<num; i++)
    {
        indegree[i] = 0;
        flag[i] = 0;
    }


    for(i=0; i<num; i++)
    {
        for(j=0; j<num; j++)
        {
            indegree[i] = indegree[i] + arr[j][i];

        }
    }

    printf("\nThe Topological order is : ");

    while(count<num)
    {
        for(k=0; k<num; k++)
        {
            if(indegree[k]==0 && flag[k]==0 )
            {
                printf(" %d ", k+1);

                flag[k] = 1;
            }
            else
            {
                for(i=0; i<num; i++)
                {
                    if(arr[i][k] == 1)
                    {
                        indegree[k]--;
                    }
                }
            }
        }

    count++;
    }

}

