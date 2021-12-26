//wap to print enterd year is leap year or not.
#include<stdio.h>
int main()
{
    int a;
    printf("Enter a Year : ");
    scanf("%d",&a);
    if(a%4==0)
    printf("%d IS Leap Year",a);
    else
    printf("%d Is Not a Leap Year",a);
}