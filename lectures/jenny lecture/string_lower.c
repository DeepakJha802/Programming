#include<stdio.h>
#include<string.h>
int main ()
{
    char s1[30];
    printf("Enter the string : ");
    gets(s1);
    strlwr(s1);
    printf("Lowercase string is : %s",s1);
}