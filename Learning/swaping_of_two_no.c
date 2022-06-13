//wap to swaping of two no.
#include<stdio.h>
int main(void)
{
    int a,b,c;
    printf("Enter Two Number Which You Have To Swaped : ");
    scanf("%d %d",&a,&b);
    c=a+b;
    b=c-b;
    a=c-a;
    printf("Value Of a and b After Swaped Is %d and %d",a,b);
}
