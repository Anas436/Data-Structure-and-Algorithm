
/* Matrix Chain Multiplication Algorithm using C programming Language.
 * Name : Md. Anas Mondol
 * ID : 1935202011
 * Batch : 52nd-(A)
 * City University, Permanent Campus.
*/


#include<stdio.h>

#include<limits.h>


int MatrixChainMultiplication(int p[], int n)
{

    int m[n][n];
    int i, j, k, L, q;

    for (i=1; i<n; i++)
    {

        m[i][i] = 0;

    }



    for (L=2; L<n; L++)
    {

        for (i=1; i<n-L+1; i++)
        {

            j = i+L-1;

            m[i][j] = INT_MAX;

            for (k=i; k<=j-1; k++)
            {

                q = m[i][k] + m[k+1][j] + p[i-1]*p[k]*p[j];

                if (q < m[i][j])
                {

                    m[i][j] = q;

                }

            }

        }

    }


    return m[1][n-1];

}


void main()
{

    int n,i;

    printf("\nEnter your number of matrix : ");
    scanf("%d",&n);

    n++;

    int array[n];

    printf("\nEnter your Dimension : \n\n");

    for(i=0;i<n;i++)
    {

        printf("Enter D[%d] :: ",i);
        scanf("%d",&array[i]);

    }

    int size = sizeof(array)/sizeof(array[0]);

    printf("\nMinimum number of multiplications is : %d \n", MatrixChainMultiplication(array, size));


}
