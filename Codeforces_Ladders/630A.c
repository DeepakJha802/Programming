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

#include <stdio.h>
#include <string.h>

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
            scanf("%d",&arr[i]);
        }
        
    }
}
