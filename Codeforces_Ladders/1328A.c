
#include <stdio.h>

int main(void)
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        int a, b;
        scanf("%d %d", &a, &b);

        int a_mod_b = (a % b);

        if (a_mod_b)
            printf("%d\n", (b - a_mod_b));
        else
            printf("%d\n", 0);
    }

    return 0;
}
