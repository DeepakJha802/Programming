// #include <stdio.h>
// #include <math.h>

// int main(void)
// {
//     int n, m;
//     scanf("%d %d", &n, &m);
//     int a[n], b[m];
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &a[i]);
//     }
//     for (int i = 0; i < m; i++)
//     {
//         scanf("%d", &b[i]);
//     }
//     int result = 0;
//     for (int i = 0; i < n; i++)
//     {
//         int count = 0;
//         for (int j = 0; j < m; j++)
//         {

//             if (b[j] % a[i] == 0)
//                 count++;
//         }
//         if (count == m)
//         {
//             result++;
//         }
//     }
//     printf("%d\n",result);
// }

// #include <stdio.h>

// int main(void)
// {
//     int n;
//     scanf("%d", &n);
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &arr[i]);
//     }
//     int s, k, l, m, a;
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] < 38)
//         {
//             printf("%d\n", arr[i]);
//         }
//         else
//         {
//             s = arr[i];
//             k = s % 5;
//             if (k != 0)
//             {
//                 l = (s / 5) + 1;
//                 m = l * 5;
//                 a = m - s;
//                 if (a < 3)
//                 {
//                     arr[i] = m;
//                 }
//                 else
//                 {
//                     arr[i] = s;
//                 }
//                 printf("%d\n", arr[i]);
//             }
//             else
//             {
//                 printf("%d\n", arr[i]);
//             }
//         }
//     }
// }

// #include <stdio.h>

// int main(void)
// {
//     int n;
//     scanf("%d", &n);
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &arr[i]);
//     }
//     int max = arr[0], min = arr[0];
//     int count_max = 0, count_min = 0;
//     for (int i = 1; i < n; i++)
//     {
//         if (max < arr[i])
//         {
//             count_max++;
//             max = arr[i];
//         }
//     }
//     for (int i = 1; i < n; i++)
//     {
//         if (min > arr[i])
//         {
//             count_min++;
//             min = arr[i];
//         }
//     }
//     printf("%d %d",count_max,count_min);
// }

// #include <stdio.h>

// int main(void)
// {
//     int n, k;
//     scanf("%d %d", &n, &k);
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &arr[i]);
//     }
//     int count = 0;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = i + 1; j < n; j++)
//         {
//             if ((arr[i] + arr[j] == k) || (((arr[i] + arr[j]) % k) == 0))
//             {
//                 count++;
//             }
//         }
//     }
//     printf("%d",count);
// }

////////////////////////////////////////////////////////////////////////

// #include <stdio.h>
// #include <stdlib.h>
// int main(void)
// {
//     int s, t;
//     scanf("%d %d", &s, &t);
//     int a, b;
//     scanf("%d %d", &a, &b);
//     int m, n;
//     scanf("%d %d", &m, &n);
//     int arr[m];

//     for (int i = 0; i < m; i++)
//     {
//         scanf("%d", &arr[i]);
//     }

//     int arr1[n];

//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &arr1[i]);
//     }

//     int no_apple = 0;

//     for (int i = 0; i < m; i++)
//     {
//         int x = 0;
//         x = arr[i] + a;
//         if (s <= x && t >= x)
//             no_apple++;
//     }

//     int no_orange = 0;

//     for (int i = 0; i < n; i++)
//     {
//         int y = 0;
//         y = arr1[i] + b;
//         if (y >= s && y <= t)
//             no_orange++;
//     }

//     printf("%d\n%d", no_apple, no_orange);
// }

///////////////////////////////////////////////////////////////////////////////////////////

// #include <stdio.h>

// int main(void)
// {
//     int n;
//     scanf("%d", &n);
//     int k;
//     scanf("%d", &k);
//     int x, y;
//     if (n % 2 == 0)
//     {
//         if (k % 2 == 0)
//         {
//             x = (n - k) / 2;
//             y = k / 2;
//             if (x > y)
//             {
//                 printf("%d\n", y);
//             }
//             else if (x < y)
//             {
//                 printf("%d\n", x);
//             }
//             else
//             {
//                 printf("%d\n", x);
//             }
//         }
//         else
//         {
//             x = ((n - k) + 1 / 2);
//             y = (k - 1) / 2;
//             if (x > y)
//             {
//                 printf("%d\n", y);
//             }
//             else if (x < y)
//             {
//                 printf("%d\n", x);
//             }
//             else
//             {
//                 printf("%d\n", x);
//             }
//         }
//     }
//     else
//     {
//         if (k % 2 != 0)
//         {
//             x = (n - k) / 2;
//             y = (k - 1) / 2;
//             if (x > y)
//             {
//                 printf("%d\n", y);
//             }
//             else if (x < y)
//             {
//                 printf("%d\n", x);
//             }
//             else
//             {
//                 printf("%d\n", x);
//             }
//         }
//         else
//         {
//             x = (n - k - 1) / 2;
//             y = n / 2;
//             if (x > y)
//             {
//                 printf("%d\n", y);
//             }
//             else if (x < y)
//             {
//                 printf("%d\n", x);
//             }
//             else
//             {
//                 printf("%d\n", x);
//             }
//         }
//     }
// }

/////////////////////////////////////////////////////////////////////////

// #include <stdio.h>

// int main(void)
// {
//     int t;
//     scanf("%d", &t);
//     while (t--)
//     {
//         int a;
//         scanf("%d", &a);
//         int rem, count = 0;
//         int x = a;
//         while (x != 0)
//         {
//             rem = x % 10;
//             x = x / 10;
//             if (a % rem == 0)
//             {
//                 count++;
//             }
//         }
//         printf("%d\n", count);
//     }
// }

/////////////////////////////////////////////////////////////////////////////////

// #include <stdio.h>

// int main(void)
// {
//     int t;
//     scanf("%d", &t);
//     while (t--)
//     {
//         int n, k;
//         scanf("%d %d", &n, &k);
//         int arr[n];
//         for (int i = 0; i < n; i++)
//         {
//             scanf("%d", &arr[i]);
//         }
//         int count = 0;
//         for (int i = 0; i < n; i++)
//         {
//             if (arr[i] <= 0)
//             {
//                 count++;
//             }
//         }
//         if (count >= k)
//             printf("NO\n");
//         else
//             printf("YES\n");
//     }
// }

///////////////////////////////////////////////////////////////////////////////////

// #include <stdio.h>

// int main(void)
// {
//     int t;
//     scanf("%d", &t);
//     while (t--)
//     {
//         int a;
//         scanf("%d", &a);
//         int x = 0;
//         for (int i = 0; i <= a; i++)
//         {
//             if(i % 2 == 0)
//             {
//                x = x + 1 ;
//             }
//             else
//             {
//                 x = x * 2;
//             }
//         }
//         printf("%d\n",x);
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
        int a, b;
        scanf("%d %d", &a, &b);
        bool equal = false;
        int i = 1;
        while (a <= b)
        {

            if (i % 2 != 0)
            {
                a = a + 1;
            }
            else
            {
                a = a + 2;
            }
            if (a == b)
            {
                equal = true;
                printf("YES\n");
            }
            i++;
        }

        if (!equal)
            // printf("YES\n");
            // else
            printf("NO\n");
    }
}
