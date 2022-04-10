// #include <stdio.h>
// int main(void)
// {
//     int n, m, b;
//     printf("Enter the no of block : ");
//     scanf("%d", &n);
//     printf("Enter the no of blockframes : ");
//     scanf("%d", &m);
//     printf("Enter the no of words per block/blockframes : ");
//     scanf("%d", &b);
//     for (int k = 0; k < n; k++)
//     {
//         int i, j,l ;
//         for (int l = 0; l < m; l++)
//         {
//             if (k % m == l)
//             i = l;
//             j = k;
//         }
//         // printf("i \t\t j \n\n %d %d",l,k);
//     }
// }
// // Enter the number of blocks: 16
// // Enter the number of blockframes: 4
// // Enter the number of words per block/blockframe: 2

// // i   j

// // 0   0  4  8  12
// // 1   1  5  9  13
// // 2   2  6  10  14
// // 3   3  7  11  15

// #include<stdio.h>
// int main(void)
// {
//     int t ;
//     scanf("%d",&t);
//     int s =0 ;
//     for (int i = 0; i < t; i++)
//     {
//         int a , b , c;
//         scanf("%d %d %d",&a,&b,&c);
//         if ((a == 1 && b == 1 )|| (b == 1  && c == 1) || (a == 1 && c == 1))
//         {
//             s++ ;
//         }
//     }
//      printf("%d",s);
// }

// #include <stdio.h>
// int main(void)
// {
//     int n, k;
//     scanf("%d %d", &n, &k);
//     int a[n], c = 0;
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d",&a[i]);
//     }
//     for (int i = 0; i < n; i++)
//     {
//         if (a[i]>=a[k-1] && a[k]>=1 )
//             c++;
//     }
//     printf("%d", c);
// }

// #include <stdio.h>
// #include <stdlib.h>

// int main(void)
// {
//     int n, k;
//     scanf("%d %d", &n, &k);

//     int* arr = malloc(n * sizeof (int));
//     for (int i = 0; i < n; i++)
//         scanf("%d", &(arr[i]));

//     int count = 0;

//     for (int i = 0; i < n; i++)
//     {
//         if ((arr[i] >= arr[k-1]) && (arr[i] > 0))
//             (count)++;
//     }

//     printf("%d\n", count);

//     free(arr);

//     return 0;
// }

