
// Selection Sort in Data Structure using C Language.
#include<stdio.h>
int smallest(int[],int,int);
void main ()
{
    int a[10] = {4, 3, 5, 20, 33, 40, 45, 88, 70, 77};
    int i,j,k,pos,temp;
    for(i=0;i<10;i++)
    {
        pos = smallest(a,10,i);
        temp = a[i];
        a[i]=a[pos];
        a[pos] = temp;
    }
    printf("Printing sorted elements which you want : \n");
    for(i=0;i<10;i++)
    {
        printf("%d\n",a[i]);
    }
}

int smallest(int a[], int n, int i)
{
    int small,pos,j;
    small = a[i];
    pos = i;
    for(j=i+1;j<10;j++)
    {
        if(a[j]<small)
        {
            small = a[j];
            pos=j;
        }
    }
    return pos;
}
