
// #include <stdio.h>

// int main(void)
// {

//     int t;
//     scanf("%d", &t);

//     while (t--)
//     {
//         int n;
//         scanf("%d", &n);

//         int ones = 0;
//         int zeroes = 0;

//         for (int i = 0; i < n; i++)
//         {
//             int temp;
//             scanf("%1d", &temp);

//             if (temp)
//                 (ones)++;
//             else
//                 (zeroes)++;
//         }

//         if (n & 1)
//         {
//             printf("YES\n");
//         }

//         else
//         {
//             if ((ones == zeroes) || !(ones & 1))
//                 printf("YES\n");
//             else
//                 printf("NO\n");
//         }
//     }
//     return 0;
// }

#include <stdio.h>
int main(void)
{
    int n, t;
    scanf("%d %d", &n, &t);
    char a[n + 1];
    for (int i = 0; i != '\0'; i++)
    {
        scanf("%c", &a[i]);
        for ( i = 0; i < n - 2; i++)
        {
            if (a[i] == 'B' && a[i + 1] == 'G')
            {
            int temp;
                temp = a[i];
                a[i] = a[i+1];
                a[i+1] = temp;
            }
        }
    }
}
