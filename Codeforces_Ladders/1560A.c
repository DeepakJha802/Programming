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
//         int x, y, a, b, c;
//         scanf("%d %d %d %d %d", &x, &y, &a, &b, &c);
//         if ((x * y) < 10)
//         {
//             printf("0\n");
//         }
//         else if (((x * y) >= 10) && ((x * y) < 21))
//         {
//             printf("%d\n",a);
//         }
//         else if (((x * y) >= 21) && ((x * y) < 42))
//         {
//             printf("%d\n",b);
//         }
//         else if ((x*y)>=42)
//         {
//             printf("%d\n",c);
//         }
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
//         int n, d;
//         scanf("%d %d", &n, &d);
//         printf("%d\n",(d/n));
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
//         scanf("%d",&n);
//         if (n % 2 == 0)
//         {
//            printf("%d\n",)
//         }
//     }
// }

// #include <stdio.h>
// int main(void)
// {
//     int t;
//     scanf("%d", &t);
//     int arr[t];
//     for (int i = 0; i < t; i++)
//     {
//         scanf("%d",&arr[i]);
//     }
//     for (int i = 0; i < t; i++)
//     {
//         if ((arr[i] > arr[i + 1]) && (arr[i] > arr[i + 2]))
//             printf("CHEST\n");
//         else if ((arr[i + 1] > arr[i]) && (arr[i + 1] > arr[i]))
//             printf("BICEPS\n");
//         else if ((arr[i + 2] > arr[i]) && (arr[i + 2] > arr[i + 1]))
//             printf("BACK\n");
//     }
// }

