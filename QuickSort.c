/* Quick Sort in Algorithms using C programming Language.
 * Name : Md. Anas Mondol
 * ID : 1935202011
 * Batch : 52nd-(A)
 * City University, Permanent Campus.
*/
#include<stdio.h>

int Partition(int a[], int start, int end);
void QuickSort(int a[], int start, int end);

void main()
{
    int i;
    int array[5]={50, 20, 40, 30, 10};

    QuickSort(array, 0, 4);

    printf("\nExpected sorted array are : \n");

    for(i=0; i<5; i++)
    {
        printf(" %d\t", array[i]);

    }
}

int Partition(int a[], int start, int end)
{
    int temp, local, flag, left, right;

    local = left = start;
    right = end;

    flag = 0;
    while(flag != 1)
    {
        while((a[local] <= a[right]) && (local!=right))

        right--;

        if(local==right)
        {
            flag =1;
        }

        else if(a[local]>a[right])
        {
            temp = a[local];
            a[local] = a[right];
            a[right] = temp;
            local = right;
        }

        if(flag!=1)
        {
            while((a[local] >= a[left]) && (local!=left))
            {
                left++;

                if(local==left)
                {
                    flag =1;
                }
                else if(a[local] <a[left])
                {
                    temp = a[local];
                    a[local] = a[left];
                    a[left] = temp;
                    local = left;
                }
            }
        }
    }
    return local;
}

void QuickSort(int a[], int start, int end)
{
    int local;

    if(start<end)
    {
        local = Partition(a, start, end);
        QuickSort(a, start, local-1);
        QuickSort(a, local+1, end);
    }
}
