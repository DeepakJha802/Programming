#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    char c[101];
    gets(c);
    int l = strlen(c);
    int upp = 0, low ;

    for (int i = 0; c[i] != '\0' ; i++)
    {
        if (c[i] >= 65 && c[i] <= 96)
            upp++;
    }
    low = l - upp;

    if (upp > low)
    {
        char ch ;
        for (int i = 0;c[i] != '\0'; i++)
        {
            ch = c[i];
            putchar(toupper(ch));
        }
    }
    else
    {
        char ch ;
        for (int i = 0;c[i] != '\0'; i++)
        {
            ch = c[i];
            putchar(tolower(ch));
        }
    }
}
