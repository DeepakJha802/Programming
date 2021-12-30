#include <stdio.h>
int main (void)
{
    float cels , farn ;
    printf("\nEnter The Temprature In Celsius : ");
    scanf("%f",&cels);
    farn = (cels * 9 / 5) + 32 ;
    printf("Temprature In Fahrenheit : %0.2f" , farn);
}
