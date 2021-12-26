//wap to print sum of n numbers.
#include<stdio.h>
int main()
{
    int n,sum=0,i;
    printf("Enter The Value of n : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++) 
    {
        sum += i;
    }
    printf("Sum = %d",sum);
}
                           