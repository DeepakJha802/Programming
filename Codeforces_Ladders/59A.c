#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    char c[101];
    int l = strlen(c);
    int upp = 0, low ,size ;

    for (int i = 0; c[i] = '\n'; i++)
    {
        if (c[i] >= 65 && c[i] <= 96)
            upp++;
    }
    low = l - upp;
    if (upp > low)
    {
        printf("%s", (toupper(c)));
    }
    else
    {
        printf("%s", (tolower(c)));
    }
}
