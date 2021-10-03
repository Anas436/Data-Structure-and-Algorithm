/* Heap Sort in Algorithms using C programming Language.
 * Name : Md. Anas Mondol
 * ID : 1935202011
 * Batch : 52nd-(A)
 * City University, Permanent Campus.
*/

#include<stdio.h>

int swap;

void Heapify(int arr[], int num, int i)
{
    int largest = i;
    int left = 2*i+1;
    int right = 2*i+2;

    // if left child larger than root.
    if(left < num && arr[left] > arr[largest])
    {
        largest = left;
    }

    // if right child larger than root.
    if(right < num && arr[right] > arr[largest])
    {
        largest = right;
    }
    // if largest is not root.
    if(largest != i)
    {
        // swaping process.
        swap = arr[i];
        arr[i] = arr[largest];
        arr[largest] = swap;

        // Calling for recursively Heapify the affected subtree.
        Heapify(arr, num, largest);
    }

}

void HeapSort(int arr[], int size)
{
    // Build Heap for rearranging array.
    for( int i = size/2-1; i>=0; i--)
    {
        Heapify(arr, size, i);
    }

    // one by one extract an elements from heap.
    for(int i = size-1; i>=0; i--)
    {
        // moving current root to end.
        swap = arr[0];
        arr[0] = arr[i];
        arr[i]= swap;

        // call max heapify on reduce heap.
        Heapify(arr, i, 0);
    }

}


void main()
{
    int arr[] = {51, 34, 67, 23, -90, 90, 45, -34, -56, 50};

    int size = sizeof(arr)/sizeof(arr[0]);

    HeapSort(arr, size);

    printf("\nYour Expected Sorted elements : \n");

    for (int i=0; i<size; i++)
    {
        printf(" %d ", arr[i]);
    }

}


