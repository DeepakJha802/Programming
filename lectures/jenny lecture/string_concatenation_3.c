#include<stdio.h>
#include<string.h>
int main()
{
    int l1,l2,i;
    char s1[30],s2[30];
    printf("Enter the string 1 :");
    gets(s1);
    printf("Enter the string 2 :");
    gets(s2);
    strncat(s1,s2,3);
    printf("String after concatenation is :%s\n",s1);
    puts(s2);
}