#include <stdio.h>
int main(void)
{
    int n;
    scanf("%d", &n);
    char a, b, count = 0;
    scanf(" %c", &a);
    for (int i = 1; i < n; i++)
    {
        scanf("%c", &b);
        if (a == b)
        {
            count++;
        }
        a = b;
    }
    printf("%d",count);
}
