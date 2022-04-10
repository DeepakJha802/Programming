#include <stdio.h>
#include <string.h>

int main(void)
{
    char c[100];
    scanf("%c", c);
    int l = strlen(c);
    int count = 0;
    while (l--)
    {
        for (int i = 0; i < l; i++)
        {
            if (c[i] != c[i+1])
                count++;
        }
        printf("%d", count);
    }
}

// sevenkplus
//  1230456780
