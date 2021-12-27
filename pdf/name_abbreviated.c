#include <stdio.h>
#include <ctype.h>

int main(void)
{
    int c;
    printf("Enter the name: ");

    while ((c = getchar()) != '\n')
    {
        if (isalpha(c))
        {
            printf("%c. ", c);
            while (((c = getchar()) != ' ') && (c != '\n'))
                continue;
            if (c == '\n')
                break;
        }
    }

    return 0;
}
