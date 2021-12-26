#include<stdio.h>
int main(void)
{
    int a=10 ,c, b=9 ;
    int *p , *q ;
    p = &a ;
    q = &b ;
    *q = *p ;
    //q=&b ;
    c = *p ;
    printf("Value Of b : %d \n",b);
    printf("Value of a : %d \n",a);
    printf("Value of a : %d %d \n",*p,*q);
    printf("Address Of a : %p \n", (void*) &a);
    printf("Address Of a : %p \n",(void*) p);
    printf("Address Of p : %p \n",(void*) &p);
    printf("Value of c : %d \n",c); 

}
