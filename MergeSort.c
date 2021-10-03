/* Merge Sort in Algorithms using C programming Language.
 * Name : Md. Anas Mondol
 * ID : 1935202011
 * Batch : 52nd-(A)
 * City University, Permanent Campus.
*/

#include<stdio.h>

void MergeSort(int arr[],int i,int j);
void Merge(int arr[],int i1, int j1, int i2, int j2);

void main()
{
    int arr[100], num, i;

    printf("Enter your number of elements : ");
    scanf("%d",&num);

    printf("\nEnter your array elements : \n");
    for(i=0; i<num; i++)
    {
        scanf("%d", &arr[i]);
    }

    MergeSort(arr, 0, num-1); // calling function.

    printf("\nYour expected sorted elements : ");
    for(i=0; i<num; i++)
    {
        printf("%d ", arr[i]);

    }

}

void MergeSort(int arr[],int i,int j)
{
    int mid;

    if(i<j)
    {
        mid=(i+j)/2;

        MergeSort(arr, i, mid); // using for left side recursion.
        MergeSort(arr, mid+1, j); // using for right side recursion.

        Merge(arr, i, mid, mid+1, j); // using for merging between two sorted sub arrays.

    }

}

void Merge(int arr[], int i1, int j1, int i2, int j2)
{
    int temp[100]; //this array using for merge.

    int i, j, k;

    i=i1; // starting of the first list.
    j=i2; // starting of the second list.
    k=0;

    while(i<=j1 && j<=j2) // when both conditions will be satisfied.
    {
        if(arr[i]<arr[j])
        {
            temp[k++]=arr[i++];
        }
        else
        {
            temp[k++]=arr[j++];
        }
    }

    while(i<=j1) // copy remaining elements of my first list.
    {
        temp[k++]=arr[i++];
    }

    while(j<=j2) // copying remaining elements of my second list.
    {
        temp[k++]=arr[j++];
    }

    for(i=i1, j=0; i<=j2; i++, j++) //copying back the sorted list to a[i].
    {
        arr[i]=temp[j];
    }

}
