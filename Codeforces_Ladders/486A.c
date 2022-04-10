#include<stdio.h>
 int main (void)
 {
     long long int n;
     scanf("%lld",&n);
     int sum_even = 0 , sum_odd = 0;
     for (int i = 1; i <= n; i++)
     {
         if (i%2==0)
         sum_even = sum_even + i ;
         else
         sum_odd = sum_odd + i ;
     }
     printf("%lld",(long long int )(sum_even-sum_odd));
 }
