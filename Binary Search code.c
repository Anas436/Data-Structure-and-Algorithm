// Binary search using recursion in c language.

#include<stdio.h>
int BinarySearch(int[], int, int, int);
void main ()
{
    int arr[10] = {11, 12, 13, 14, 15, 16, 17, 18, 19,20};
    int item, position =-1;
    printf("Enter the item which you want to search : ");
    scanf("%d",&item);

    position = BinarySearch(arr, 0, 9, item);


    if(position != -1)
    {
        printf("Item found at position %d",position);
    }
    else
    {
        printf("Item not found");
    }
}


















int BinarySearch(int a[], int left, int right, int item)
{
    int mid;
    if(right >= left)
    {
        mid = (left + right)/2;
        if(a[mid] == item)
        {
            return mid+1;
        }
        else if(a[mid] < item)
        {
            return BinarySearch(a,mid+1,right,item);
        }
        else
        {
            return BinarySearch(a,left,mid-1,item);
        }

    }
    return -1;
}
