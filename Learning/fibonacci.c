//wap to print fibonacci series.
#include<stdio.h>
int main(void)
{
    int i=1,fibo=1,n;
    printf("Enter a Number How Far You Have To Find The Fibonacci Series : ");
    scanf("%d",&n);
    for(i=1;i>=n;i++)
    {
        fibo = i++;
    }
    printf("Fibonacci Series Is %d :\n",fibo);
}
