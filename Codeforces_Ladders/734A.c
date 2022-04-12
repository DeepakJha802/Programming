#include <stdio.h>
#include<string.h>

int main(void)
{
    int n;
    scanf("%d",&n);
    char a[n+1];
    scanf("%s",a);
    int count_anton = 0 , count_danik = 0 ;
    for (int i = 0; a[i] != '\0'; i++)
    {
        if (a[i] == 'A')
        count_anton++;
        else
        count_danik++;
    }
    if (count_anton > count_danik )
    printf("Anton");
    else if (count_anton < count_danik)
    printf("Danik");
    else if (count_anton == count_danik)
    printf("Friendship");
}

