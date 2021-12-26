#include<stdio.h>
#include<string.h>
int main()
{
    char s1[30],s2[30];
    printf("Enter the first string :");
    gets(s1);
    printf("Enter the second string :");
    gets(s2);
    strcat(s1,s2);
    printf("String after concatenation Is :%s ",s1);
}