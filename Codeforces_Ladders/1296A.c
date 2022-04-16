// #include <stdio.h>

// int main(void)
// {
//     int t;
//     scanf("%d", &t);

//     while (t--)
//     {
//         int n;
//         scanf("%d", &n);

//         int number_of_total_integers = n;
//         int number_of_odd_integers = 0;
//         int number_of_even_integers = 0;

//         while (n--)
//         {
//             int x;
//             scanf("%d", &x);

//             if (x & 1) // i.e. if x is odd.
//                 (number_of_odd_integers)++;
//             else
//                 (number_of_even_integers)++;
//         }

//         if (number_of_even_integers == number_of_total_integers) // i.e. if all integers are even.
//         {
//             printf("NO\n");
//         }

//         else if (number_of_odd_integers == number_of_total_integers) // i.e. if all integers are odd.
//         {
//             if (number_of_total_integers & 1) // i.e. if number_of_total_integers is odd.
//                 printf("YES\n");
//             else
//                 printf("NO\n");
//         }

//         else // i.e. if there is a mixture of odd and even integers.
//         {
//             printf("YES\n");
//         }
//     }

//     return 0;
// }



#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        int n;
        scanf("%d", &n);

        int sum = 0;
        bool at_least_one_odd_integer_is_present = false;
        bool at_least_one_even_integer_is_present = false;

        while (n--)
        {
            int x;
            scanf("%d", &x);

            sum += x;

            if (x & 1) // i.e. if x is odd.
                at_least_one_odd_integer_is_present = true;
            else
                at_least_one_even_integer_is_present = true;
        }

        if ((sum & 1) || (at_least_one_odd_integer_is_present && at_least_one_even_integer_is_present))
            printf("YES\n");
        else
            printf("NO\n");
    }

    return 0;
}
