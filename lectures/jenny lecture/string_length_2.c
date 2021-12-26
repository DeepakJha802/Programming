#include <stdio.h>
#include <string.h>
int main()
{
    int i=0,count = 0;
    char name[30];
    printf("Enter the string :");
    gets(name);
    while (name[i]!='\0')
    {
        count++;
        i++;
    }
    puts(name);
    printf("Length of string is :%d",count);
}