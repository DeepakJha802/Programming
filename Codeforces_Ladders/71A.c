// #include <stdio.h>

// int main(void)
// {

//     int t;
//     scanf("%d", &t);
//     char s[101];
//     getchar();

//     while (t--)
//     {
//         int i = 0;
//         int c;
//         while (((c = getchar()) != '\n') && (c != EOF))
//         {
//             s[i++] = (char) c;
//         }
//         s[i] = '\0';

//         if (i > 10)
//             printf("%c%d%c\n", s[0], (i-2), s[i-1]);
//         else
//             puts(s);
//     }
// }


// second way and easy way

#include <stdio.h>
#include <string.h>


int main(void)
{

    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        char c[100];
        scanf("%s", c);

        int x = strlen(c);

        if (x > 10)
            printf("%c%d%c\n", c[0], x-2, c[x-1]);
        else
            printf("%s\n", c);
    }

    return 0;

}
