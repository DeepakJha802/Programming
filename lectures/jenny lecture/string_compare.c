#include<stdio.h>
#include<string.h>
int main()
{
    int value=0;
    char s1[30],s2[30];
    printf("Enter the string 1 :");
    gets(s1);
    printf("Enter the string 2 :");
    gets(s2);
    value=strcmp(s1,s2);          //if(strcmp(s1,s2)=0)
    if(value==0)                  //printf("same")
    printf("Same");               //else
    else                          //printf("not same")
    printf("not same");
    printf("\nvalue : %d",value);
}