#include<stdio.h>
int main(void)
{
    int n;
    printf("Enter the size of array : ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the element of array : ");
    for (int i=0;i<n;i++)
    {
    scanf("%d",&arr[i]);
    }
    printf("Array elements is : ");
    for (int i=0;i<n;i++)
    {
    printf("%d ",arr[i]);
    }
    printf("\n");
    printf("Array elements in reverse order :");
    for(int i=n-1;i>0;i--)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}
