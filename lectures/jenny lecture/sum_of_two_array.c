//wap to print sum of two array.
#include<stdio.h>
int main()
{
    int p,q,r,i;
    printf("Enter the size of 1st , 2nd and 3rd array :\n");
    scanf("%d %d %d",&p,&q,&r);
    int arr1[p],arr2[q],sumarr[r];
    printf("Enter the eleents of 1st array :\n");
    for(i=0;i<p;i++)
    scanf("%d",&arr1[i]);
    printf("Enter the elements of 2nd array :\n");
    for(i=0;i<q;i++)
    scanf("%d",&arr2[i]);
    for(i=0;i<r;i++)
    {
    sumarr[i]=arr1[i]+arr2[i];
    printf("Sum of array first and second at index %d : %d\n",i,sumarr[i]);
    }
}
