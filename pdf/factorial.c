#include <stdio.h>
int main (void)
{
    int n , fact = 1 ;
    printf("\nEnter The Number : ");
    scanf("%d",&n);
    for (int i=1 ; i <= n ; i++)
    {
        fact = fact * i ;
    }
    printf("Factorial Of a Number %d Is : %d",n,fact);

}
