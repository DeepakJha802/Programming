#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n, k;
        scanf("%d %d", &n, &k);
        if (k == 0)
        {
            if (k % 4 == 1 || k % 4 == 2 || k % 4 == 3)
                printf("ON\n");
            else
                printf("OFF\n");
        }
        else if (k == 1)
        {
            if (n == 0)
                printf("ON\n");
            else if ((k + 1) % 4 == 1 || (k + 1) % 4 == 2 || (k + 1) % 4 == 3)
                printf("Ambiguous\n");

            else
                printf("OFF\n");
        }
    }
}