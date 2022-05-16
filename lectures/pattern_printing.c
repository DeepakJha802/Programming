

// #include <stdio.h>
// int main(void)
// {
//     int n;
//     scanf("%d", &n);
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = n-i; j > 0; j--)
//         {
//             printf("* ");
//         }
//         printf("\n");
//     }
// }

// * * * * *
// * * * *
// * * *
// * *
// *

/////////////////////////////////////////////////////////////////////////////

// #include <stdio.h>
// int main(void)
// {
//     int n;
//     scanf("%d", &n);
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = n - i; j > 0; j--)
//         {
//             printf("  ");
//         }
//         for (int k = i; k >= 1; k--)
//         {
//             printf("* ");
//         }
//         printf("\n");
//     }
// }

//         *
//       * *
//     * * *
//   * * * *
// * * * * *

//////////////////////////////////////////////////////////////////////////

// #include <stdio.h>
// int main(void)
// {
//     int n;
//     scanf("%d", &n);
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = i; j >= 0; j--)
//         {
//             printf("* ");
//         }
//         printf("\n");
//     }
// }

// *
// * *
// * * *
// * * * *
// * * * * *

//////////////////////////////////////////////////////////////////////////

// #include <stdio.h>
// int main(void)
// {
//     int n;
//     scanf("%d", &n);
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = n - i; j > 0; j--)
//         {
//             printf("  ");
//         }
//         for (int k = 1; k <= i; k++)
//         {
//             printf("%d ",k);
//         }
//         printf("\n");
//     }
// }

//         1
//       1 2
//     1 2 3
//   1 2 3 4
// 1 2 3 4 5

//////////////////////////////////////////////////////////////////////////

// #include <stdio.h>
// int main(void)
// {
//     int n;
//     scanf("%d", &n);
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = n-i; j > 0; j--)
//         {
//             printf("%d ",i+1);
//         }
//         printf("\n");
//     }
// }

// 1 1 1 1 1
// 2 2 2 2
// 3 3 3
// 4 4
// 5

//////////////////////////////////////////////////////////////////////////

// #include <stdio.h>
// int main(void)
// {
//     int n;
//     scanf("%d", &n);
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = (n - i - 1); j > 0; j--)
//         {
//             printf("  ");
//         }
//         // int p;
//         for (int k = 1; k <= i + 1; k++)
//         {
//             printf("%d ", k);
//             // p = k;
//         }
//         for (int l = i; l > 0; l--) // for (int l = p - 1; l > 0; l--)
//         {
//             printf("%d ", l);
//         }
//         printf("\n");
//     }
// }

//         1
//       1 2 1
//     1 2 3 2 1
//   1 2 3 4 3 2 1
// 1 2 3 4 5 4 3 2 1

//////////////////////////////////////////////////////////////////////////

// #include <stdio.h>
// int main(void)
// {
//     int n;
//     scanf("%d", &n);
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = n - i; j > 0; j--)
//         {
//             printf("  ");
//         }
//         for (int k = i; k >= 1; k--)
//         {
//             printf(" *");
//         }
//         for (int l = i; l > 1; l--)
//         {
//             printf(" *");
//         }
//         printf("\n");
//     }
// }

// #include <stdio.h>
// int main(void)
// {
//     int n;
//     scanf("%d", &n);
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = n - i; j > 0; j--)
//         {
//             printf("  ");
//         }
//         for (int k = 1; k <= 2 * i - 1; k++)
//         // for (int k = 2 * i - 1; k >= 1; k--)
//         {
//             printf(" *");
//         }
//         printf("\n");
//     }
// }

//          *
//        * * *
//      * * * * *
//    * * * * * * *
//  * * * * * * * * *

//////////////////////////////////////////////////////////////////////////

// #include <stdio.h>
// int main(void)
// {
//     int n;
//     scanf("%d", &n);
//     int p = 1;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = (n - i - 1); j > 0; j--)
//         {
//             printf("  ");
//         }
//         int m;
//         for (int k = 1; k <= i + 1; k++)
//         {
//             printf("%d ", p);
//             p++;
//             m = p - 2;
//         }
//         p = p - i ;
//         for (int l = 1; l < i + 1; l++)
//         {
//             printf("%d ", (m));
//             m--;
//         }
//         printf("\n");
//     }
// }

//         1
//       2 3 2
//     3 4 5 4 3
//   4 5 6 7 6 5 4
// 5 6 7 8 9 8 7 6 5

//////////////////////////////////////////////////////////////////////

#include <stdio.h>

int main ()
{
    int n;
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            
        }
    }
}
