// #include<stdio.h>
// int main(void)
// {
//     int t;
//     scanf("%d",&t);
//     while(t--)
//     {
//         int n;
//         scanf("%d",&n);
//         if (n % 7 == 0)
//         {
//             printf("%d\n",n);
//         }
//         else
//         {
//             int s = n / 7;
//             if (((s + 1) * 7)% 10 == 0)
//             {
//                 printf("%d\n",(s + 1) * 7);
//             }
//         }
//     }
// }

#include <stdio.h>

int main(void)
{
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    if (n <= 0)
        goto loc_1;

    loc_0: printf("Hello World\n"); --n;
    if (n > 0)
        goto loc_0;

    loc_1: return 0;
}
