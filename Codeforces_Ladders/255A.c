// #include <stdio.h>
// int main(void)
// {
//     int t;
//     scanf("%d", &t);
//     int arr[t];
//     for (int i = 0; i < t; i++)
//     {
//         scanf("%d", &arr[i]);
//     }
//     int chest = 0, biceps = 0, back = 0;
//     for (int i = 0; i < t; i++)
//     {
//         if (i % 3 == 0)
//         {
//             chest = chest + arr[i];
//         }
//         else if (i % 3 == 1)
//         {
//             biceps = biceps + arr[i];
//         }
//         else if (i % 3 == 2)
//         {
//             back = back + arr[i];
//         }
//     }
//     if (chest > biceps && chest > back)
//     {
//         printf("chest\n");
//     }
//     else if (biceps > chest && biceps > back)
//     {
//         printf("biceps\n");
//     }
//     else if (back > chest && back > biceps)
//     {
//         printf("back\n");
//     }
// }


#include <stdio.h>
int main(void)
{
    int t;
    scanf("%d", &t);
    int arr[t];
    int chest = 0, biceps = 0, back = 0;
    for (int i = 0; i < t; i++)
    {
        scanf("%d", &arr[i]);
         if (i % 3 == 0)
        {
            chest = chest + arr[i];
        }
        else if (i % 3 == 1)
        {
            biceps = biceps + arr[i];
        }
        else if (i % 3 == 2)
        {
            back = back + arr[i];
        }
    }
    if (chest > biceps && chest > back)
    {
        printf("chest\n");
    }
    else if (biceps > chest && biceps > back)
    {
        printf("biceps\n");
    }
    else if (back > chest && back > biceps)
    {
        printf("back\n");
    }
}
