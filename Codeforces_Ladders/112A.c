#include<stdio.h>
int main(void)
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        if (n % 7 == 0)
        {
            printf("%d\n",n);
        }
        else
        {
            int s = n / 7;
            if (((s + 1) * 7)% 10 == 0)
            {
                printf("%d\n",(s + 1) * 7);
            }
        }
    }
}
