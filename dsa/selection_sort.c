#include<stdio.h>
#define SIZE 5
int main(void){
    int arr[SIZE],i,j,t;
    for ( i = 0; i < SIZE; i++)
    {
     printf("Enter Value For Index Position at %d : ",i);
     scanf("%d",&arr[i]);
    }
   printf("\nUnsorted array Elements is :");
   for ( i = 0; i < SIZE; i++)
   {
       printf("\t%d",arr[i]);
   }
   for (i = 0; i < SIZE; i++)
   {
       j=i+1;
       while (j<SIZE)
       {
           if (arr[i]>arr[j])
           {
               t=arr[i];
               arr[i]=arr[j];
               arr[j]=t;
           }
           j++;
       }   
   }
   printf("\nArray In Sorted Order is :");
   for (i = 0; i < SIZE; i++)
   {
       printf("\t%d",arr[i]);
   } 
}
