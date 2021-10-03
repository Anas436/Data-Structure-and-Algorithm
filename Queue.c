#include<stdio.h>
#include<stdlib.h>

#define maxsize 5

void enqueue();
void dequeue();
void showing();

int queue[maxsize]; int front=-1, rear=-1;

void main()
{
    int choice;

    while(choice !=4)
    {
        printf("*******Queue Operation using Array******\n");
        printf("\nPlease enter your choice in the Queue : ");
        printf("\n 1.Enqueue\n 2.Dequeue\n 3.Showing\n 4.Exit\n");


        switch(choice)
        {

        case 1 :
            enqueue();
            break;

        case 2 :
            dequeue();
            break;

        case 3 :
            showing();
            break;

        case 4 :
            printf("Exiting the code.....");

        default :
            printf("\nYour choice is invalid\n");

        }
    }
}

void enqueue()
{

    int num;
    printf("\nEnter your elements : ");
    scanf("%d", &num);

    if(rear = maxsize -1)
    {

        printf("\nOverFlow\n");
        return;
    }

    if(front==-1 && rear==-1)
    {

        front=rear=0;
    }

    else
    {
        rear=rear+1;

    }
    queue[rear]= num;
    printf("\nValue have Inserted\n");
}

void dequeue()
{
    int num;
    if(front==-1 || front>rear)
    {
        printf("\nUnderFlow\n");
        return;
    }
    else
    {
        num=queue[front];

        if(front==rear)
        {
            front=rear=-1;
        }

        else
        {
            front =front +1;
        }
        printf("\nValue Deleted\n");
    }


}


void showing()
{
    int i;

    if(rear == -1)
    {
        printf("\nQueue is empty\n");
    }

    else
    {

      for(i=front; i<=rear; i++)
       {
        printf("\n%d\n",queue[i]);
       }

    }

}





