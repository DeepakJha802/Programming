#include<stdio.h>
int main(void)
{
    char c[1000];
    int i = 0;
    scanf("%s",&c[i]);
    if ((c[0] >= 'a') && (c[0] <= 'z'))
    {
        c[0] = c[0] - ('a'-'A') ;
    }
    printf("%s",c);
}
