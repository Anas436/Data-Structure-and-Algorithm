#include<stdio.h>

void main()
{

    int item, first_item=0, second_item = 1, next_step;

    printf("\nEnter your items : ");
    scanf("%d", &item);

    printf("\nFirst [%d] terms of Fibonacci Series : \n",item);

    for(int i = 0; i< item; i++)
    {
        if(i < 1)
        {
            next_step = i;
        }

        else
        {
            next_step = first_item + second_item;
            first_item = second_item;
            second_item = next_step;
        }
        printf("%d\n",next_step);
    }


}
