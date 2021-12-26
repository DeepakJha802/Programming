#include<stdio.h>
int main(void)
{
    int a=10,b=20;
    int *p,*q;
    p=&a;
    q=&b;
    //q=p;
    printf("a = %d \n %d \n %d \n",a,*p,*q);
    *q=*p;
    printf("a = %d \n %d \n %d",a,*p,*q);
}
