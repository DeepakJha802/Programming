//wap to print no is even or odd by using if else.
#include<stdio.h>
int main(void)
{
    int x;
    printf("Enter a Number : ");
    scanf("%d",&x);
    if(x%2==0)
    printf("%d Is Even",x);
    else
    printf("%d is Odd",x);
}
