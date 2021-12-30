#include <stdio.h>
int main (void)
{
    int m;
    float i,r,t;
    printf("\nEnter The Amount You Invested : ");
    scanf("%d",&m);
    printf("Enter The Time For You Are Invested Your Money : ");
    scanf("%f",&t);
    printf("Enter The Rate Of Intrest Per Year : ");
    scanf("%f",&r);
    i = m * r * t ; // Hera simple intrest is i.
    printf("Simple Intrest is : %0.2f",i);
}
