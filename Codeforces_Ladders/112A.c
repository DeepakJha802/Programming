#include <stdio.h>
#include <string.h>

int main(void)
{
    char a[100], b[100];

    scanf("%s %s", a, b);

    int i = strcmp(a,b);

    if (i == 0 )
        printf("0");

    else if (i == -1)
        printf("-1");
        
    else
        printf("1");
}
