#include<stdio.h>
int main(void)
{
    int a=10,b=20,c;
    int *p;
    //p=&a,&b; // in this case vaslue of a is 10
    p=(&a,&b);//in this case value of b is 20
    //q=&b;
    c=*p;
    printf("value of a : %d\n",a);
    printf("value of a : %d\n",*p);
    printf("Address Of a : %p\n",(void*) &a);
    printf("Address Of a : %p\n",(void*) p);
    printf("Address Of p : %p\n",(void*) &p);
    printf("value of c :%d\n",c);
    printf("Address of c :%p\n",(void*) &c);

}
