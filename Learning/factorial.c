//wap to print factorial of a number.
#include<stdio.h>
int main(void)
{
    int n,fact=1,i;
    printf("Enter The Value Of n : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    printf("Factorial of %d Is %d",n,fact);
}
