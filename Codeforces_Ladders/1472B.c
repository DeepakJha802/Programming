#include <stdio.h>

int main(void)
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        int n;
        scanf("%d", &n);

        int number_of_ones = 0;
        int number_of_twos = 0;

        while (n--)
        {
            int a;
            scanf("%d", &a);

            if (a == 1)
                (number_of_ones)++;
            else
                (number_of_twos)++;
        }

        if (number_of_twos & 1)
        {
            if (number_of_ones >= 2)
            {
                if ((number_of_ones - 2) & 1)
                    printf("NO\n");
                else
                    printf("YES\n");
            }

            else
            {
                printf("NO\n");
            }
        }

        else
        {
            if (number_of_ones & 1)
                printf("NO\n");
            else
                printf("YES\n");
        }
    }

    return 0;
}
