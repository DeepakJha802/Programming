#include <stdio.h>
int main(void)
{
    int n;
    scanf("%d", &n);
    int a, count = 0;
    scanf("%d\n", &a);
    for (int i = 1; i < n ; i++)
    {
        int b;
        scanf("%d", &b);
        if (a != b)
        {
            count++;
        }
        else
        {
            count;
        }
        a = b;
    }
    printf("%d\n", count + 1);
}
