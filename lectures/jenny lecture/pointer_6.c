#include<stdio.h>
int main(void)
{
    int a[]={3,2,67,0,56};
    int *p;
    p=a;
    printf("%d %d\n",*(p++),*p++);
    printf("%d\n",*p);
    printf("%d",*++p);
}
