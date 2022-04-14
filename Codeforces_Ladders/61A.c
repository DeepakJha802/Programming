#include<stdio.h>
#include<string.h>
int main(void)
{
    char s1[101],s2[101];
    scanf("%s %s",s1,s2);
    for(int i=0;i<strlen(s1);i++)
    printf("%d",s1[i]^s2[i]);
}
