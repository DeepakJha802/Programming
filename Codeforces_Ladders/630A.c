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

//////////////////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

int main(void)
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        int arr[n];
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
            sum = sum + arr[i];
        }
        int no_positive = 0, no_negative = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == 1)
                no_positive++;
            else
                no_negative++;
        }
        if (n % 2 == 0)
        {
            if (no_negative == no_positive)
                printf("%d\n", sum / 2);
            else if (no_negative > no_positive)
                printf("%d\n", no_negative);
        }
        else
        {
            printf("-1\n");
        }
        sum = 0;
    }
}
