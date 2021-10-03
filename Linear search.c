#include<stdio.h>
void main ()
{
    int a[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90,100};
    int item, i,flag;
    printf("\nEnter Item which is to be searched : ");
    scanf("%d",&item);
    for (i = 0; i< 10; i++)
    {
        if(a[i] == item)
        {
            flag = i+1;
            break;
        }
        else
        flag = 0;
    }
    if(flag != 0)
    {
        printf("\nItem found at location %d\n",flag);
    }
    else
    {
        printf("\nItem not found\n");
    }
}
