#include<stdio.h>
int main(void)
{
    long int n;
    int k;
    scanf("%ld %d",&n,&k);
    // int rem ;
    for(int i = 1; i <= k; i++)
    {
        if (n % 10 != 0)
        {
            n--;
        }
        else
        {
            n = n / 10 ;
        }
    }
    printf("%ld",n);
}
