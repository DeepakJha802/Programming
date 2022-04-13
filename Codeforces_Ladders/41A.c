// #include<stdio.h>
// #include<string.h>
// int main(void)
// {
//     char s[100],t[100],count=0;
//     scanf("%s%s",s,t);
//     int l=strlen(s);
//     for(int i=0;i<l;i++)
//     {
//         if(s[i]==t[l-i-1])
//             count++;
//     }
//     count==l?printf("YES\n"):printf("NO\n");
// }

#include <stdio.h>
#include <string.h>

int main(void)
{
    char s[100], t[100];

    scanf("%s %s", s, t);

    int l = strlen(t);
    int count = 0;

    for (int i = 0; s[i] !='\0'; i++)
    {
        if (s[i] == t[l - i - 1])
            count++;

        else
        {
            break;
        }
    }
    if (count == l)
        printf("YES");
    else
        printf("NO");
}

