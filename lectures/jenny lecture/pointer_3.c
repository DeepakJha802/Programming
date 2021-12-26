#include<stdio.h>
int main (void)
{
    int a=20;
    int *p;
    int **q;
    int ***r;
    p=&a;
    q=&p;
    r=&q;
    //8p=12;
    // **q=17;
    // ***r=56;
    printf("a = %d\n",a);
    printf("a = %d\n",*p);
    printf("a = %d\n",*(*q));
    printf("a = %d\n",*(*(*r)));
    printf("Address of q = %p %p \n",(void*) r,(void*) &q);
    printf("Address of p = %p %p \n",(void*) &p,(void*) q);

}
