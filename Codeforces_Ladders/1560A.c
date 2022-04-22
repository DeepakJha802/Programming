
// #include <stdio.h>
// int main(void)
// {
//     int t;
//     scanf("%d", &t);
//     while (t--)
//     {
//         int x;
//         scanf("%d", &x);
//         if (x%10==0)
//         printf("%d\n",x/10);
//         else if (x % 10 == 5)
//         printf("%d\n",(x/10)+1);
//         else
//         printf("-1\n");
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
//         int arr[n];
//         int count = 0;
//         for (int i = 0; i < n; i++)
//         {
//             scanf("%d",&arr[i]);
//             if (arr[i]>=10 && arr[i]<=60)
//             count++;
//         }
//           printf("%d\n",count);
//     }
// }

// #include <stdio.h>
// #include<stdlib.h>

// int main(void)
// {
//     int t;
//     scanf("%d", &t);
//     while (t--)
//     {
//         int x,y;
//         scanf("%d %d",&x,&y);
//         if (x == 2 && y == 4)
//         printf("2\n");
//         else
//         printf("%d\n",abs((x*2)-(y)));

//     }
// }

// #include <stdio.h>

// int main(void)
// {
//     int t;
//     scanf("%d", &t);
//     while (t--)
//     {
//         int x,y,z,w;
//         scanf("%d %d %d %d",&x,&y,&z,&w);
//        if ((x-y)<=z)
//        printf("YES\n");
//        else if ()
//        printf("NO\n");
//     }
// }

// #include<stdio.h>
// int main(void)
// {
//     int a , b ;
//     scanf("%d %d",&a,&b);
//     if (a == 1 && b == 1)
//     printf("https://discuss.codechef.com");
//     else if (a == 1 && b ==0)
//     printf("https://www.codechef.com/contests");
//     else if ( a == 0 && b == 1)
//     printf("https://www.codechef.com/practice");
// }

// #include <stdio.h>
// int main(void)
// {
//     int t;
//     scanf("%d", &t);
//     while (t--)
//     {
//         int n, k;
//         scanf("%d %d", &n, &k);
//         if (k == 0)
//         {
//             if (n % 4 == 1 || n % 4 == 2 || n % 4 == 3)
//                 printf("ON\n");
//             else
//                 printf("OFF\n");
//         }
//         else if (k == 1)
//         {
//             if ( n % 4 == 0)
//                 printf("ON\n");
//             else
//             printf("AMBIGUOUS\n");
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
//         int arr[3], sum = 0, n = 0;
//         for (int i = 0; i < 3; i++)
//         {
//             scanf("%d", &arr[i]);
//             sum = sum + arr[i];
//         }
//         for (int i = 0; i < 2; i++)
//         {
//             if (arr[i] <= arr[i + 1])
//                 n = arr[i];
//         }
//         printf("%d\n", (sum - n));
//     }
// }

// #include <stdio.h>
// int main(void)
// {
//     int t;
//     scanf("%d", &t);
//     while (t--)
//     {
//         int a, b;
//         scanf("%d %d", &a, &b);
//         if (b % a != 0)
//             printf("%d\n", b / a);
//         else if (b%a==0 && a<b)
//             printf("%d\n",(b/a)-1);
//         else
//         printf("0\n");
//     }
// }


