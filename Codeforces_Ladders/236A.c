// #include <stdio.h>
// #include <string.h>

// int main(void)
// {
//     char c[100];
//     scanf("%s", c);
//     int l = strlen(c);
//     int count = l;

//     for (int i = 1; c[i] = '\0'; i++)
//     {
//         if (c[i-1] == c[i])
//         {
//             count--;
//             c[0];
//         }
//     }
//     printf("%d", count);
// }

// // sevenkplus
// //  1230456780

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main(void)
{
    int n;
    scanf("%d", &n);
    int a[n], b[n-1];
    bool present = false;
    for (int i = 0; i < n; i++)
    {
        scanf("%d %d",&a[i],&b[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i] == n || b[i] == n)
        {
            present = true ;
        }
        else
        present =  false ;
    }
    if (present)
    printf("I become the guy.");
    else
    printf("Oh, my keyboard!");
}
