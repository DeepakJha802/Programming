#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        int a, b;
        scanf("%d %d", &a, &b);
        for (int j = 1; j < a; j++)
        {
            if (a % b != 0)
            {
                a++;
            }
            else
            {
                printf("%d\n", j - 1);
                break;
            }
        }
    }
}
