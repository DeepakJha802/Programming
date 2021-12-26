//wap to print biggest no among three.
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter The Three Number : ");
    scanf("%d %d %d",&a,&b,&c);
    if(a>b && a>c)
    printf("%d Is Biggest number among three",a);
    else if (b>a && b>c)
    printf("%d Is Bi5ggest among three",b);
    else if(c>a && c>b)
    printf("%d Is Biggest among three",c); 
}