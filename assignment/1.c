// 1. Accept n nos and print in reverse without using array
// 2. Accept no of nodes and create a linked list, display in forward and reverse
// 3. Write a menu driven program to implement :
// a) insertion sort
// b) accept key and search it using binary search
// 4. Find maximum and minimum element from an array using divide and conquer
// 5. Implement activity selection problem

#include <stdio.h>

void accept_and_print_integer(int*, int*);

int main(void)
{
    int n;
    printf("Enter the number of integers: ");
    scanf("%d", &n);

    printf("Enter %d integers: ", n);

    int count = 0;

    accept_and_print_integer(&n, &count);
    putchar('\n');

    return 0;

}

void accept_and_print_integer(int* ptr_n, int* ptr_count)
{
    int x;
    scanf("%d", &x);
    (*ptr_count)++;

    if (*ptr_count < *ptr_n)
        accept_and_print_integer(ptr_n, ptr_count);

    printf("%d ", x);
}
