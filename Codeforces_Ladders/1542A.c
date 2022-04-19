#include <stdio.h>

int main(void)
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        // int n, no_odd = 0, no_even = 0;
        // scanf("%d", &n);
        // n = 2 * n ;
        // while (n--)
        // {
        //     int a;
        //     scanf("%d", &a);
        //     if ((a % 2) != 0)
        //         no_odd++;
        //     else
        //         no_even++;
        // }
        // if (no_even == no_odd)
        //     printf("YES\n");
        // else
        //     printf("NO\n");

        int n;
        scanf("%d", &n);

        int number_of_odd = 0;

        for (int i = 0; i < (2 * n); i++)
        {
            int a;
            scanf("%d", &a);

            if (a & 1)
                (number_of_odd)++;
        }

        if (number_of_odd == n)
            printf("YES\n");
        else
            printf("NO\n");
    }
}
