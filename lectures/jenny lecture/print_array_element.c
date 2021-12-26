//wap to print array elements.
#include<stdio.h>
int main()
{
    int a[5],i;
    printf("Enter elements of array : \n");
    for(i=0;i<5;i++)
    scanf("%d",&a[i]);
    for(i=0;i<5;i++)
    printf("Elements in array at index %d : %d\n",i,a[i]);
}