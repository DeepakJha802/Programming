#include<stdio.h>
 int main (void)
 {
     int x ;
     scanf("%d",&x);
     if (x == 1 || x == 2 || x == 3 || x == 4 || x == 5)
     printf("1");
    else if ( x % 5 == 0)
    printf("%d",(x/5));
    else
    printf("%d",(x/5)+1);
 }
