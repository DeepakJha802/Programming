#include<stdio.h>
#include<string.h>
int main ()
{
    char s1[30];
    printf("Enter the string : ");
    gets(s1);
    strupr(s1);
    printf("Uppercase string is : %s",s1);
}
