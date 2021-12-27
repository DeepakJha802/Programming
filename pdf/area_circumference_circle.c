#include<stdio.h>
int main(void)
{
    float r,area,circum;
    printf("\nEnter The Radis Of A Circle : \n");
    scanf("%f",&r);
    area = 3.14*r*r;
    circum = 2*3.14*r;
    printf("Area of a Circle : %0.2f \n",area);
    printf("Circumference of a Circle : %0.2f \n",circum);
}
