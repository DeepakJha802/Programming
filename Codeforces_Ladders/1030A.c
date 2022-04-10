#include <stdio.h>
int main(void)
{
    int n;
    scanf("%d", &n);
    int a[n], count = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    if (a[i] == 0)
        count;
    else
        count++;
    }
    if (count == 0)
        printf("EASY");
    else
        printf("HARD");
}
