#include <stdio.h>
int main(void)
{
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        int h, m, minute = 0;
        scanf("%d %d", &h, &m);
        minute = ((23 - h) * 60) + (60 - m);
        if (h == 0 && m == 0)
            printf("0\n");
        else
        {
            printf("%d\n", minute);
        }
    }
}

