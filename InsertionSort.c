// Insertion Sort using C language in data structure.

#include<stdio.h>

void InsertionSort(int arr[], int n)
{
    int i, key, j;
    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;

        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

void ShowingArray(int arr[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        printf("%d \n", arr[i]);
}


void main()
{
    int arr[5] = { 3, 9, 10, 8, 5 };
    int n = sizeof(arr) / sizeof(arr[0]);

    InsertionSort(arr, n);
    ShowingArray(arr, n);

}
