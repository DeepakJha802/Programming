#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    bool perfect_squares[10001] = { false };
    for (int i = 1; i <= 100; i++)
        perfect_squares[i * i] = true;

    int t;
    scanf("%d", &t);

    while (t--)
    {
        bool required_subsequence_exists = false;

        int n;
        scanf("%d", &n);

        while (n--)
        {
            int a;
            scanf("%d", &a);

            if (!(perfect_squares[a]))
                required_subsequence_exists = true;
        }

        if (required_subsequence_exists)
            printf("YES\n");
        else
            printf("NO\n");
    }

    return 0;
}
