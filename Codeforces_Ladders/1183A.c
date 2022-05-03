#include <stdio.h>

int main(void)
{
    int a, i, sum = 0;
    scanf("%d", &a);
    i = a;
    while (1)
    {
        a = i;
        while (a != 0)
        {
            sum = sum + a % 10;
            a = a / 10;
        }
        if (sum % 4 == 0)
        {
            break;
        }
        i++;
        sum = 0;
    }
    printf("%d\n", i);
}
