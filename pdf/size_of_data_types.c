#include <stdio.h>
#include <stdbool.h>

int main (void)
{
    int n;
    printf("\nChoice   Data Type     \n"
             "1.       Int           \n"
             "2.       Float         \n"
             "3.       Char          \n"
             "4.       Double        \n"
             "5.       Long double   \n");

    printf("\nEnter Your Choice : ");
    scanf("%d", &n);

    size_t required_size; // size_t is a special data type used for sizes.

    bool input_is_valid = true;

    if (n == 1)
        required_size = sizeof (int);
    else if (n == 2)
        required_size = sizeof (float);
    else if (n == 3)
        required_size = sizeof (char);
    else if (n == 4)
        required_size = sizeof (double);
    else if (n == 5)
        required_size = sizeof (long double);
    else
        input_is_valid = false;

    if (input_is_valid)
        printf("Size Of Data Type Is : %zu bytes\n", required_size); // %zu is a specifier for the size_t data types.
    else
        printf("Invalid input\n");
}
