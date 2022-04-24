// #include <stdio.h>
// #include <stdlib.h>

// int main(void)
// {
//     int t;
//     scanf("%d", &t);

//     while (t--)
//     {
//         int number_of_ones = 0;
//         int number_of_minus_ones = 0;

//         int n;
//         scanf("%d", &n);

//         while (n--)
//         {
//             int a;
//             scanf("%d", &a);

//             if (a == 1)
//                 (number_of_ones)++;
//             else
//                 (number_of_minus_ones)++;
//         }

//         int difference = abs(number_of_ones - number_of_minus_ones);

//         // (number_of_ones & 1) means that number_of_ones is odd.
//         if ((difference > 2) || ((number_of_ones & 1) && (difference == 2)))
//             printf("No\n");
//         else
//             printf("Yes\n");
//     }
// }

#include <stdio.h>

int main(void)
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        int arr[n] , count = 0 , sum = 0;
        while (n--)
        {
            scanf("%d",&arr[n]);
        }
        int   
    }
}
