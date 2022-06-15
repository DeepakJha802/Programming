#include <stdio.h>

int main(void)
{
    int n;
    printf("Enter the no of activities: ");
    scanf("%d", &n);

    int x[n], s[n], f[n];

    printf("\nEnter the activity number, start time and finish time :-\n");
    for (int i = 0; i < n; i++)
        printf("A"), scanf("%d %d %d", &x[i], &s[i], &f[i]);

    int t;
    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < (n - i); j++)
        {
            if (f[j] > f[j + 1])
            {
                t = x[j], x[j] = x[j + 1], x[j + 1] = t;
                t = s[j], s[j] = s[j + 1], s[j + 1] = t;
                t = f[j], f[j] = f[j + 1], f[j + 1] = t;
            }
        }
    }

    printf("\nSelected Activities are:\n");

    int i = 0;
    printf("A%d ", x[i]);

    for (int j = 1; j < n; j++)
        if (f[i] <= s[j])
            printf("A%d ", x[j]), i = j;
}
