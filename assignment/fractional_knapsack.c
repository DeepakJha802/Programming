#include <stdio.h>
#include <string.h>

int main(void)
{
    int a[499999];

    int n;
    scanf("%d", &n);

    for (int i = (n - 1); i < ((2 * n) - 1); i++)
        scanf("%d", &(a[i]));

    memmove(a, (a + n), (n - 1) * sizeof (int));

    unsigned long long ans = 0;

    for (int i = 0; i < n; i++)
    {
        int j = i;

        while (j < (i + n - 1))
        {
            int k = (i + n - 1);

            while (1)
            {
                if (a[k] >= (k - j))
                    break;

                k--;
            }

            ans += 1;
            j = k;
        }
    }

    printf("%llu\n", ans);

    return 0;
}

// 0 - 2
// 1 - 3
// 2 - 4
// 3 - 1
// 4 - 2
// 5 - 3
// 6 - 4
