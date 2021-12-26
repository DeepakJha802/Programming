#include<stdio.h>
#include<string.h>
int main()
{
    char s1[30];
    printf("Enter The string : ");
    gets(s1);
    strrev(s1);
    printf("Reverse string is : %s",s1);
}