#include <stdio.h>
#include <string.h>
int main()
{
    char s1[30];
    int i;
    printf("Enter the string : ");
    gets(s1);
    for (i = 0; s1[i] != '\0'; i++)
    {
        // if(s1[i]>='A' && s1[i]<='Z')
        if (s1[i] >= 65 && s1[i] <= 90)
        {
            s1[i] = s1[i] + 32;
        }
    }
    printf("lowercase string is : %s", s1);

    for (i = 0; s1[i] != '\0'; i++)
    {
        if (s1[i] >= 'a' && s1[i] <= 'z')
        {
            s1[i] = s1[i] - 32;
        }
    }
        printf("\nUppercase string is : %s", s1);
}
