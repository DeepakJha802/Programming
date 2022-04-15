#include<stdio.h>
#include<string.h>
int main(void)
{
    char s[101],t[101],count=0;
    scanf("%s %s",s,t);
    int l=strlen(s);
    for(int i=0;i<l;i++)
    {
        if(s[i]==t[l-i-1])
            count++;
        else
            break;
    }
    if (count == l)
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}

// #include <stdio.h>
// #include <stdbool.h>

// int main(void)
// {
//     // Treat s as a simple char array, and not as a string.

//     char s[100];
//     int c;

//     int i = 0;
//     while (((c = getchar()) != '\n') && (c != EOF))
//         s[i++] = c;

//     // Length of string is equal to i.

//     bool s_is_reverse_of_t = true;

//     for (int x = (i - 1); x >= 0; x--)
//     {
//         c = getchar();

//         if (c != s[x])
//         {
//             s_is_reverse_of_t = false;
//             break;
//         }
//     }

//     if (s_is_reverse_of_t)
//         printf("YES\n");
//     else
//         printf("NO\n");

//     return 0;
// }

