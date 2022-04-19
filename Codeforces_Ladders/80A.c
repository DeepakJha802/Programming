#include <stdio.h>
int main(void)
{
    int a, b;
    scanf("%d %d", &a, &b);

    for (int i = a + 1; i > 0; i++)
    {
        int count = 0;
        for (int j = 1; j <= i; j++)
        {
            if (i % j == 0)
                count++;
        }
        if (count == 2)
        {
            if (i == b)
            {
                printf("YES");
                break;
            }
            else
            {
                printf("NO");
                break;
            }
        }
    }
}
