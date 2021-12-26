#include<stdio.h>
#include<string.h>
int main()
{
    char name[30];
    int count;
    printf("Enter the string : ");
    gets(name);
    count=strlen(name);
    printf("String length is : %d",count);
}