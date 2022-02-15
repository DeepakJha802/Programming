#include <stdio.h>
int main(void)
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        int  n ;
        scanf("%d",&n);
        for (int j =1 ;j <= n ; j++)
        {
            int rev = 0 , rem ;
            rem  = n % 10 ;
            rev = rev * 10 + rem ;
            n = n / 10 ;
            printf("%d",rev);
        }

    }
}
