//wap to print quotient and reminder.
#include<stdio.h>
int main()
{
    int x,y,z,a;
    printf("Enter The Divident and Divisor : ");
    scanf("%d %d",&x,&y);
    z=x/y;
    a=x%y;
    printf("%d is Quotient\n",z);
    printf("%d is Remainder",a);

}