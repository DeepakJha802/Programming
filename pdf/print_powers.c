#include <stdio.h>
int main (void)
{
    int n , p1 , p2 , p3 ;
    printf("\nEnter The Number : ");
    scanf("%d",&n);
    p1 = n*1 ;
    p2 = n*n ;
    p3 = n*n*n ;
    printf("First Three Powers Are :\n%d %d %d" , p1 , p2 , p3);
}
