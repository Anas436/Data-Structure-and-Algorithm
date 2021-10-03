// HeapSort Using C language in Data Structure.
#include<stdio.h>

int temp;

void Heapify(int arr[], int size, int i)
{
    int largest = i;
    int left = 2*i + 1;
    int right = 2*i + 2;

    if (left < size && arr[left] >arr[largest])
    largest = left;

    if (right < size && arr[right] > arr[largest])
    largest = right;

    if (largest != i)
    {
        temp = arr[i];
        arr[i]= arr[largest];
        arr[largest] = temp;

        Heapify(arr, size, largest);
    }
}











































void HeapSort(int arr[], int size)
{
    int i;
    for (i = size / 2 - 1; i >= 0; i--)
    Heapify(arr, size, i);

for (i=size-1; i>=0; i--)
{
    temp = arr[0];
    arr[0]= arr[i];
    arr[i] = temp;
    Heapify(arr, i, 0);
}
}

void main()
{
    int arr[5] = {80, 10, 50, 20, 22};
    int i;
    int size = sizeof(arr)/sizeof(arr[0]);

HeapSort(arr, size);

printf("Printing your expected Sorted Elements : \n");

for (i=0; i<size; ++i)
    printf("%d\n",arr[i]);
}
