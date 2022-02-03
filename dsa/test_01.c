// DEEPAK KUMAR JHA
// 10800120057
// Group - (1) insertion sort


#include <stdio.h>
#include <stdlib.h>

void insertion_sort(int *, int);

int main(void)
{
    int size;
    printf("Enter the no. of integers to be sorted: ");
    scanf("%d", &size);

    int arr[size];
    printf("Enter %d integers: ", size);
    for (int i = 0; i < size; i++)
        scanf("%d", &arr[i]);

    insertion_sort(arr, size);

    printf("\nSorted array: ");
    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");

    return 0;
}

void insertion_sort(int* arr, int size)
{
    int temp;
    int j;

    for (int i = 1; i < size; i++)
    {
        temp = arr[i];
        for (j = i-1; (j >= 0) && (temp < arr[j]); j--)
            arr[j+1] = arr[j];
        arr[j+1] = temp;
    }
}
