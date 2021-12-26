#include<stdio.h>
int main(void)
{
    char name[30];
    printf("Enter the string :");
    gets(name);
    printf("%.5s\n",name);
    printf("%10.5s\n",name);
    puts(name);
    puts(name);
}
