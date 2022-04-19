#include<stdio.h>

int main (void)
{
    int n;
    scanf("%d",&n);
    if(n == 1)
    printf("Ehab");
    else if(((n-2)%2) == 0)
    printf("Mahmoud");
    else if (((n-1)%2)== 0)
    printf("Ehab");
}
