#include <stdio.h>

int main (void)
{
    int s1,s2,s3,s5,s4,s;
    float p;
    printf("\nEnter The Marks Of 5 Subject :\n");
    scanf("%d %d %d %d %d",&s1,&s2,&s3,&s4,&s5);
    s = s1 + s2 + s3 + s4 + s5 ;
    p = (s * 100) / 500 ;
    printf("Percentage of Five Subject is : %0.1f ",p); 
}
