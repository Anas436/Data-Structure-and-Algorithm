// Quick Sort in data structure using C Language.
#include <stdio.h>

int Partition(int a[], int beg, int end);
void Quick_Sort(int a[], int beg, int end);

void main()
{
    int i;
    int arr[5]={10, 50, 60, 90, 80};
    Quick_Sort(arr, 0, 4);

    printf("Your Expected sorted array : ");

    for(i=0; i<5; i++)
    printf("%d \t", arr[i]);
}
int Partition(int a[], int beg, int end)
{

    int left, right, temp, loc, flag;
    loc = left = beg;
    right = end;
    flag = 0;

    while(flag != 1)
    {
        while((a[loc] <= a[right]) && (loc!=right))
        right--;
        if(loc==right)
        flag =1;

        else if(a[loc]>a[right])
        {
            temp = a[loc];
            a[loc] = a[right];
            a[right] = temp;
            loc = right;
        }
        if(flag!=1)
        {
            while((a[loc] >= a[left]) && (loc!=left))
            left++;
            if(loc==left)
            flag =1;

            else if(a[loc] <a[left])
            {
                temp = a[loc];
                a[loc] = a[left];
                a[left] = temp;
                loc = left;
            }
        }
    }
    return loc;
}

void Quick_Sort(int a[], int beg, int end)
{

    int loc;
    if(beg<end)
    {
        loc = Partition(a, beg, end);
        Quick_Sort(a, beg, loc-1);
        Quick_Sort(a, loc+1, end);
    }
}
