#include<stdio.h>
 int main (void)
 {
     int t;
     scanf("%d",&t);
    for (int i=1; i <= t; i++)
    {
       int n;
       scanf("%d",&n);
       int arr[n];
     int sum = 0 ;
       for (int j=0; j < n; j++)
       {
           scanf("%d",&arr[j]);
           sum = sum + arr[j];
       }
       if (sum%2!=0 && sum <= 2000)
       {
           printf("YES\n");
       }
       else
       printf("NO\n");
    }
 }
