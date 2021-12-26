#include<stdio.h>
#include<string.h>
int main()
{
    int l1,l2,i=0;
    char s1[30],s2[30];
    printf("Enter the string first :");
    gets(s1);
    printf("Enter the string second :");
    gets(s2);
    l1=strlen(s1);
    l2=strlen(s2);
    for(i=0;i<=l2;i++)
    {
        s1[l1+i]=s2[i];
    }
    printf("string after concatenation is :%s",s1);
}