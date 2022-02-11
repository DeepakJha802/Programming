#include<stdio.h>
//sum of two array.
int main(void)
{
    int arr1[5],arr2[5],sumarr[5],i;
    printf("Enter the eleents of 1st & 2nd array :\n");
    for(i=0;i<5;i++)
    scanf("%d \n %d",&arr1[i],&arr2[i]);
   // printf("Enter the elements of 2nd array :\n");
    //for(i=0;i<5;i++)
   // scanf("%d",&arr2[i]);
    for(i=0;i<5;i++)
    {
    sumarr[i]=arr1[i]+arr2[i];
    printf("Sum of array first and second at index %d : %d\n",i,sumarr[i]);
    }
}
//we can write this code two type.in above both condition are right.
