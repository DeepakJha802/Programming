#include <stdio.h>
#include <string.h>

int main(void)
{
    char c[101];
    scanf("%s",c);
    int l = strlen(c);
    int count = l;
    char c ;
    for (int i = 0; c[i] = '\0'; i++)
    {
        if (c[0] != c[l-i])
        {
            count++;
        }
    }
    printf("%d", count);
}

// sevenkplus
//  1230456780

