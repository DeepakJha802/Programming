#include<stdio.h>
int main(void)
{
    float base,hight,area;
    printf("\nEnter The Base And Hight Of Triangle : \n");
    scanf("%f %f",&base,&hight);
    // arer of triangle = 1/2*base*hight
    area = 0.5*base*hight;
    printf("Area of Triangle : %0.2f \n",area);
}
