#include <stdio.h>
int main(void)
{
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        int a, b, c;
        scanf("%d %d %d", &a, &b, &c);
        if (a == b && b == c)
        {
            a++;
            b++;
            c++;
            printf("%d %d %d\n", a, b, c);
        }
        else if (a > b && a > c)
        {
            a++;
            printf("0 %d %d\n", a - b, a - c);
        }
        else if (b > c && b > a)
        {
            b++;
            printf("%d 0 %d\n", b - a, b - c);
        }
        else if (c > a && c > b)
        {
            c++;
            printf("%d %d 0\n", c - a, c - b);
        }
        else if (a == b && a > c)
        {
            a++;
            b++;
            printf("0 0 %d\n", a - c);
        }
        else if (b == c && c > a)
        {
            b++;
            c++;
            printf("%d 0 0\n", b - a);
        }
        else if (c == a && a > b)
        {
            c++;
            a++;
            printf("0 %d 0\n", a - b);
        }
        else if (a == b && b < c)
        {
            c++;
            printf("%d %d 0\n", c - a, c - b);
        }
        else if (b == c && c < a)
        {
            a++;
            printf("0 %d %d\n", a - b, a - c);
        }
        else if (c == a && a < b)
        {
            b++;
            printf("%d 0 %d\n", b - a, b - c);
        }
    }
}


