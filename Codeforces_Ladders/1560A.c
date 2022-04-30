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

// int main (void)
// {
//     int t;
//     scanf("%d",&t);
//     while (t--)
//     {
//         int  x , y , a , b , c;
//         scanf("%d %d %d %d %d",&x,&y,&a,&b,&c);
//         x = x / a;
//         y = y / b;
//         if (x >= y && y >= c)
//         printf("YES\n");
//         else
//         printf("NO\n");
//     }
// }

// #include <stdio.h>
// int main(void)
// {
//     int t;
//     scanf("%d", &t);
//     while (t--)
//     {
//         int n, x, k;
//         scanf("%d %d %d", &n, &x, &k);
//         if (n >= x && n <= k)
//             printf("Take second dose now\n");
//         else if (n > k)
//         {
//             printf("Too Late\n");
//         }
//         else if (n < x)
//         {
//             printf("Too Early\n");
//         }
//     }
// }

#include <stdio.h>

int main(void)
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int x;
        scanf("%d", &x);
        
    }
}
