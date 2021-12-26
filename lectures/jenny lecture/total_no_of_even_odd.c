//wap to find total no of even no and odd no in an array.
#include<stdio.h>
int main()
{
    int n,i;
    int even=0,odd=0;
    printf("Enter the size of array : ");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements of array :\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]%2==0)
        {
          even++;
          printf("Even is %d\n",a[i]);
        }
          else
          {
            odd++;
            printf("odd is %d\n",a[i]);
          }
    }
    printf("Total no of even number is : %d\n",even);
    printf("Total no of odd number is : %d\n",odd);
}
