///wap to print find the root of quadratic equations is real or complex.
#include<stdio.h>
int main(void)
{
int a,b,c,D;
printf("Enter The Coefficients of Quadratic Equation : ");
scanf("%d %d %d",&a,&b,&c);
D=b*b-4*a*c;
if(D>=0)
printf("Roots Of Quadratic Equation Is Real");
else
printf("Roots Of Quadratic Equation Is Complex");
}
