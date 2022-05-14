// // // // // #include <stdio.h>
// // // // // #include <stdlib.h>

// // // // // int main(void)
// // // // // {
// // // // //     int t;
// // // // //     scanf("%d", &t);

// // // // //     while (t--)
// // // // //     {
// // // // //         int number_of_ones = 0;
// // // // //         int number_of_minus_ones = 0;

// // // // //         int n;
// // // // //         scanf("%d", &n);

// // // // //         while (n--)
// // // // //         {
// // // // //             int a;
// // // // //             scanf("%d", &a);

// // // // //             if (a == 1)
// // // // //                 (number_of_ones)++;
// // // // //             else
// // // // //                 (number_of_minus_ones)++;
// // // // //         }

// // // // //         int difference = abs(number_of_ones - number_of_minus_ones);

// // // // //         // (number_of_ones & 1) means that number_of_ones is odd.
// // // // //         if ((difference > 2) || ((number_of_ones & 1) && (difference == 2)))
// // // // //             printf("No\n");
// // // // //         else
// // // // //             printf("Yes\n");
// // // // //     }
// // // // // }

// // // // // #include <stdio.h>

// // // // // int main(void)
// // // // // {
// // // // //     int t;
// // // // //     scanf("%d", &t);
// // // // //     while (t--)
// // // // //     {
// // // // //         char a[6], b[6];
// // // // //             scanf("%s", a);
// // // // //             scanf("%s", b);
// // // // //             for (int i = 0; i == '\n'; i++)
// // // // //             {
// // // // //                 if (a[i] == b[i])
// // // // //                     printf("G");
// // // // //                 else
// // // // //                     printf("B");
// // // // //             }
// // // // //             printf("\n");
// // // // //     }
// // // // // }

// // // // #include <stdio.h>
// // // // #include <stdbool.h>
// // // // int main(void)
// // // // {
// // // //     int t;
// // // //     scanf("%d", &t);
// // // //     while (t--)
// // // //     {
// // // //         long int a, b, c, x, y;
// // // //         scanf("%ld %ld %ld %ld %ld", &a, &b, &c, &x, &y);
// // // //         bool result = true;
// // // //         if (c + a >= x)
// // // //         {
// // // //             if (a < x)
// // // //             {
// // // //                 if (((c + a) - x) + (b - y) >= 0)
// // // //                 {
// // // //                     result = false;
// // // //                 }
// // // //             }
// // // //         }
// // // //         else if (((c + b) - y) >= 0)
// // // //         {
// // // //             result = false;
// // // //         }
// // // //         if (result)
// // // //         {
// // // //             printf("NO\n");
// // // //         }
// // // //         else
// // // //             printf("YES\n");
// // // //     }
// // // // }

// // // // // #include <stdio.h>
// // // // // #include <stdbool.h>

// // // // // int main(void)
// // // // // {
// // // // //     // int t;
// // // // //     // scanf("%d", &t);
// // // // //     // while (t--)
// // // // //     // {
// // // // //         int n, h, x;
// // // // //         scanf("%d %d %d", &n, &h, &x);
// // // // //         bool he_will_get_sufficient_time_after_change_time_zone = false;
// // // // //         while (n--)
// // // // //         {
// // // // //             int a;
// // // // //             scanf("%d", &a);
// // // // //             if ((x + a) >= h)
// // // // //                 he_will_get_sufficient_time_after_change_time_zone = true;
// // // // //         }
// // // // //         if (he_will_get_sufficient_time_after_change_time_zone)
// // // // //             printf("YES\n");
// // // // //         else
// // // // //             printf("NO\n");
// // // // //     // }
// // // // // }

// // // // // #include <stdio.h>

// // // // // int main(void)
// // // // // {
// // // // //     int t;
// // // // //     scanf("%d", &t);
// // // // //     while (t--)
// // // // //     {
// // // // //         int x , y;
// // // // //         scanf("%d %d", &x, &y);
// // // // //         if (x == y)
// // // // //         {
// // // // //             printf("%d\n",(x*2)-1);
// // // // //         }
// // // // //         else if (y == 0)
// // // // //         {
// // // // //             printf("%d\n",x);
// // // // //         }
// // // // //         else
// // // // //         {
// // // // //             printf("%d\n",(x+y));
// // // // //         }
// // // // //     }
// // // // // }

// // // // // #include <stdio.h>

// // // // // int main(void)
// // // // // {
// // // // //     int t;
// // // // //     scanf("%d", &t);
// // // // //     while (t--)
// // // // //     {
// // // // //         int n;
// // // // //         scanf("%d", &n);
// // // // //         if (n == 1 || n == 2)
// // // // //         {
// // // // //             printf("1\n");
// // // // //         }
// // // // //         else if (n == 3)
// // // // //         {
// // // // //             printf("2\n");
// // // // //         }
// // // // //         else
// // // // //         printf("%d\n",n);

// // // // //     }
// // // // // }

// // // // // #include <stdio.h>

// // // // // int main(void)
// // // // // {
// // // // //     int t;
// // // // //     scanf("%d", &t);
// // // // //     while (t--)
// // // // //     {
// // // // //         int x, y;
// // // // //         scanf("%d %d", &x, &y);
// // // // //         if ((x * 100) >= (y * 10))
// // // // //         {
// // // // //             printf("CLOTH\n");
// // // // //         }
// // // // //         else if ((x * 100) < (y * 10))
// // // // //         {
// // // // //             printf("DISPOSABLE\n");
// // // // //         }
// // // // //     }
// // // // // }

// // // // // #include <stdio.h>
// // // // // #include <stdbool.h>

// // // // // int main(void)
// // // // // {
// // // // //     int t;
// // // // //     scanf("%d", &t);
// // // // //     while (t--)
// // // // //     {

// // // // //         int n;
// // // // //         scanf("%d", &n);
// // // // //         int arr[n];
// // // // //         for (int i = 0; i < n; i++)
// // // // //         {
// // // // //             scanf("%d", &arr[i]);
// // // // //         }

// // // // //         int a;
// // // // //         for (int i = 0; i < n; ++i)
// // // // //         {
// // // // //             for (int j = i + 1; j < n; ++j)
// // // // //             {
// // // // //                 if (arr[i] > arr[j])
// // // // //                 {

// // // // //                     a = arr[i];
// // // // //                     arr[i] = arr[j];
// // // // //                     arr[j] = a;
// // // // //                 }
// // // // //             }
// // // // //         }

// // // // //         bool condition_satisfied = true;
// // // // //         for (int i = 1; i < n - 1; i++)
// // // // //         {
// // // // //             int d = arr[i] - arr[i - 1];
// // // // //             int c = arr[i + 1] - arr[i];
// // // // //             if (2 * d != c && d != 2 * c)
// // // // //             {
// // // // //                 condition_satisfied = false;
// // // // //                 break;
// // // // //             }
// // // // //         }

// // // // //         if(condition_satisfied)
// // // // //         printf("YES\n");
// // // // //         else
// // // // //         printf("NO\n");
// // // // //     }
// // // // // }

// // // // // #include <stdio.h>
// // // // // int main(void)
// // // // // {
// // // // //     int t;
// // // // //     scanf("%d", &t);
// // // // //     while (t--)
// // // // //     {
// // // // //         int n, k, v;
// // // // //         scanf("%d %d %d", &n, &k, &v);
// // // // //         int arr[n], sum = 0;
// // // // //         for (int i = 0; i < n; i++)
// // // // //         {
// // // // //             scanf("%d", &arr[i]);
// // // // //             sum = sum + arr[i];
// // // // //         }
// // // // //         int x = ((((n + k) * v) - (sum)) / k);
// // // // //         if ((((n + k) * v) - (sum)) < 0)
// // // // //         {
// // // // //             printf("-1\n");
// // // // //         }
// // // // //         else
// // // // //         {
// // // // //             if ((((n + k) * v) - (sum)) % k == 0)
// // // // //             {
// // // // //                 printf("%d\n",x);
// // // // //             }
// // // // //             else
// // // // //             {
// // // // //                 printf("-1\n");
// // // // //             }
// // // // //         }
// // // // //     }
// // // // // }

// // // // // #include <stdio.h>

// // // // // int main(void)
// // // // // {
// // // // //     int t;
// // // // //     scanf("%d", &t);
// // // // //     int n;
// // // // //     scanf("%d",&n);
// // // // //     int a[n];
// // // // //     for (int i = 0; i < n; i++)
// // // // //     {
// // // // //         scanf("%d",&a[i]);
// // // // //     }
// // // // //     for (int i = 0; i < n; i++)
// // // // //     {
// // // // //         if (a[0] < a[i+1])
// // // // //         {

// // // // //         }

// // // // //     }

// // // // // }

// // // // // #include <stdio.h>
// // // // // int main(void)
// // // // // {

// // // // //     int t;
// // // // //     scanf("%d", &t);
// // // // //     while (t--)
// // // // //     {
// // // // //         int n;
// // // // //         scanf("%d",&n);
// // // // //         int a[n];
// // // // //         for(int i = 0; i < n; i++)
// // // // //         {
// // // // //             scanf("%d",&a[i]);
// // // // //         }

// // // // //         if ((a[0] == 1 && a[n-1] == 0) || (a[0] == 1 && a[n-1] == 1) || (a[0] == 0 && a[n-1] == 1))
// // // // //         printf("1\n");
// // // // //         else
// // // // //         printf("0\n");
// // // // //     }
// // // // // }

// // // // #include <stdio.h>
// // // // int main(void)
// // // // {
// // // //     int t;
// // // //     scanf("%d", &t);
// // // //     while (t--)
// // // //     {
// // // //         int n, x, y;
// // // //         scanf("%d %d %d", &n, &x, &y);
// // // //         int a = 3*n+2*y-5;
// // // //         int b = 3*n+2*x-5;
// // // //         int c = 2*n-2+n-x+y-1 + 2*n-x-y;
// // // //         int d = 2*n-2+2*n-x-y+n-y+x-1;
// // // //         if (x >= y)
// // // //         {
// // // //             if (x+y <= n+1)
// // // //             {
// // // //                 printf("%d\n",(a));
// // // //             }
// // // //             else
// // // //             {
// // // //                 printf("%d\n",c);
// // // //             }
// // // //         }
// // // //         else
// // // //         {
// // // //             if (x+y <= n+1)
// // // //             {
// // // //                 printf("%d\n",b);
// // // //             }
// // // //             else
// // // //             {
// // // //                 printf("%d\n",d);
// // // //             }
// // // //         }
// // // //     }
// // // // }

// // // #include <stdio.h>
// // // #include <stdlib.h>

// // // int main(void)
// // // {
// // //     int t;
// // //     scanf("%d", &t);
// // //     while (t--)
// // //     {
// // //         int n;
// // //         scanf("%d", &n);
// // //         int arr[n];
// // //         int differece, max = 0;
// // //         for (int i = 0; i < n; i++)
// // //         {
// // //             scanf("%d", &arr[i]);
// // //         }
// // //         if (n == 1)
// // //         {
// // //             printf("%d\n",arr[0]);
// // //         }
// // //         else
// // //         {
// // //             for (int i = 0; i < n - 1; i++)
// // //             {
// // //                 if (i % 2 == 0)
// // //                 {
// // //                     differece = abs(arr[i] - (arr[i + 1] + 1));
// // //                     if (differece > max)
// // //                     {
// // //                         max = differece;
// // //                     }
// // //                 }
// // //             }
// // //         printf("%d\n", max);
// // //         }
// // //     }
// // // }

// // // #include <stdio.h>

// // // int main(void)
// // // {
// // //     int t;
// // //     scanf("%d", &t);
// // //     while (t--)
// // //     {
// // //         int n;
// // //         scanf("%d", &n);
// // //         int arr[n];
// // //         int min = 0;
// // //         for (int i = 0; i < n; i++)
// // //         {
// // //             scanf("%d", &arr[i]);
// // //             if (i > 0 && arr[i] <= min)
// // //             {
// // //                 min = arr[i];
// // //             }
// // //             else
// // //             {
// // //                 if (i == 0)
// // //                 {
// // //                 min = arr[i];
// // //                 }
// // //             }
// // //         }
// // //         int sum = 0;
// // //         for (int i = 0; i < n; i++)
// // //         {
// // //             sum = sum + (arr[i] - min);
// // //         }
// // //         printf("%d\n", sum);
// // //     }
// // // }

// #include <stdio.h>
// #include <stdlib.h>

// int main(void)
// {
//     int t;
//     scanf("%d", &t);
//     while (t--)
//     {
//         int a, b, c;
//         scanf("%d %d %d", &a, &b, &c);
//         if (a > b && b > c)
//         printf("%d\n",b);
//         else if (b>c && c>a)
//         printf("%d\n",c);
//         else
//         printf("%d\n",a);

//     }
// }

// // // #include <stdio.h>
// // // int main(void)
// // // {
// // //     int t;
// // //     scanf("%d", &t);
// // //     while (t--)
// // //     {
// // //         int n;
// // //         scanf("%d", &n);
// // //         int a[n], b[n];
// // //         for (int i = 0; i < n; i++)
// // //         {
// // //             scanf("%d", &a[i]);
// // //         }
// // //         for (int j = 0; j < n; j++)
// // //         {
// // //             scanf("%d", &b[j]);
// // //         }
// // //         int count = 0;
// // //         for (int i = 0; i < n; i++)
// // //         {
// // //             for (int j = (n - 1); j >= 0; j--)
// // //             {
// // //                 if ((i < j) && (a[i] == b[j]) && (a[j] == b[i]))
// // //                     count++;
// // //             }
// // //         }
// // //         printf("%d\n", count);
// // //     }
// // // }

// // #include <stdio.h>
// // int main (void)
// // {
// //     int t;
// //     scanf("%d",&t);
// //     while (t--)
// //     {
// //        int n , x;
// //        scanf("%d %d",&n,&x);
// //        int avg = 0;
// //        int a[n];
// //        for(int i = 0; i < n; i++)
// //        {
// //         //    int a;
// //            scanf("%d",&a[i]);
// //            avg = avg + a;
// //        }
// //        if (avg/n == x)
// //        printf("YES\n");
// //        else
// //        printf("NO\n");
// //     }
// // }

