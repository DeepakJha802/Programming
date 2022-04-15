#include <stdio.h>
#include <string.h>

int main(void)
{
    char a[100], b[100];

    scanf("%s %s", a, b);

    int i = strcmp(a,b);
    int j = strcmp(b,a);
    // printf("%d %d",i,j);

    if (i == j )
        printf("0");

    else if (i < j)
        printf("-1");

    else if (i > j)
        printf("1");
}
