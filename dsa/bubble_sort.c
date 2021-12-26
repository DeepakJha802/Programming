#include<stdio.h>
int main(void)
{
    int n;
    printf("Enter The Size Of Array : ");
    scanf("%d",&n);
    int arr[n],i,j,T,k;
    for ( i = 0; i < n ; i++)
    {
     printf("Enter The Value For Index Position %d : ",i);
     scanf("%d",&arr[i]);
    }
    printf("\nThe Unsorted array Elements : ");
    for ( i = 0; i < n; i++)
   {
     printf("\t%d",arr[i]);
   }
   for ( i = 0; i < n; i++)
   {
       for (j = 0; j < n-i-1; j++)
       {
           if(arr[j]>arr[j+1])
           {
               T=arr[j];
               arr[j]=arr[j+1];
               arr[j+1]=T;
           }
       }
       printf("\n\nArray After %d Pass : ",i);
       for(k=0;k<n;k++)
       printf("\t%d",arr[k]);
   }
   printf("\n\nThe array In Sorted Order :");
   for (i = 0; i < n; i++)
   {
       printf("\t%d",arr[i]);
   } 
}
