#include<stdio.h>
int main (void)
{
    int n;
    printf("\nEnter The Year :");
    scanf("%d",&n);
    if (n%4 == 0 || n%400 == 0 || n%100 == 0)
    printf("%d Is Leap Year.",n);
    else
    printf("%d Is Not Leap Year.",n);
}
