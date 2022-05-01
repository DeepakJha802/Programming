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

// #include <stdio.h>

// int main(void)
// {
//     int t;
//     scanf("%d", &t);
//     while (t--)
//     {
//         char a[6], b[6];
//             scanf("%s", a);
//             scanf("%s", b);
//             for (int i = 0; i == '\n'; i++)
//             {
//                 if (a[i] == b[i])
//                     printf("G");
//                 else
//                     printf("B");
//             }
//             printf("\n");
//     }
// }

// #include <stdio.h>

// int main(void)
// {
//     int t;
//     scanf("%d", &t);
//     while (t--)
//     {
//         int x, y, z, w, a, b, c;
//         scanf("%d %d %d %d %d %d %d", &x, &y, &z, &w, &a, &b, &c);
//         if ((a >= x) && (b >= y) && (c >= z) && ((a + b + c) >= w))
//             printf("YES\n");
//         else
//             printf("NO\n");
//     }
// }

// #include <stdio.h>
// #include <stdbool.h>

// int main(void)
// {
//     // int t;
//     // scanf("%d", &t);
//     // while (t--)
//     // {
//         int n, h, x;
//         scanf("%d %d %d", &n, &h, &x);
//         bool he_will_get_sufficient_time_after_change_time_zone = false;
//         while (n--)
//         {
//             int a;
//             scanf("%d", &a);
//             if ((x + a) >= h)
//                 he_will_get_sufficient_time_after_change_time_zone = true;
//         }
//         if (he_will_get_sufficient_time_after_change_time_zone)
//             printf("YES\n");
//         else
//             printf("NO\n");
//     // }
// }

// #include <stdio.h>

// int main(void)
// {
//     int t;
//     scanf("%d", &t);
//     while (t--)
//     {
//         int x , y;
//         scanf("%d %d", &x, &y);
//         if (x == y)
//         {
//             printf("%d\n",(x*2)-1);
//         }
//         else if (y == 0)
//         {
//             printf("%d\n",x);
//         }
//         else
//         {
//             printf("%d\n",(x+y));
//         }
//     }
// }

// #include <stdio.h>

// int main(void)
// {
//     int t;
//     scanf("%d", &t);
//     while (t--)
//     {
//         int n;
//         scanf("%d", &n);
//         if (n == 1 || n == 2)
//         {
//             printf("1\n");
//         }
//         else if (n == 3)
//         {
//             printf("2\n");
//         }
//         else
//         printf("%d\n",n);

//     }
// }

// #include <stdio.h>

// int main(void)
// {
//     int t;
//     scanf("%d", &t);
//     while (t--)
//     {
//         int x, y;
//         scanf("%d %d", &x, &y);
//         if ((x * 100) >= (y * 10))
//         {
//             printf("CLOTH\n");
//         }
//         else if ((x * 100) < (y * 10))
//         {
//             printf("DISPOSABLE\n");
//         }
//     }
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
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
        }

        int a;
        for (int i = 0; i < n; ++i)
        {
            for (int j = i + 1; j < n; ++j)
            {
                if (arr[i] > arr[j])
                {

                    a = arr[i];
                    arr[i] = arr[j];
                    arr[j] = a;
                }
            }
        }

        bool condition_satisfied = true;
        for (int i = 1; i < n - 1; i++)
        {
            int d = arr[i] - arr[i - 1];
            int c = arr[i + 1] - arr[i];
            if (2 * d != c && d != 2 * c)
            {
                condition_satisfied = false;
                break;
            }
        }
        
        if(condition_satisfied)
        printf("YES\n");
        else
        printf("NO\n");
    }
}
