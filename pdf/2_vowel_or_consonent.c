#include <stdio.h>
int main (void)
{
    char n ;
    printf("\nEnter a Character :\n");
    scanf("%c",&n);
    if (n == 'a' || n == 'e' || n == 'i' || n == 'o' || n == 'u' || n == 'A' || n == 'E' || n == 'I' || n == 'O' || n == 'U')
    printf("%c Is a Vowel",n);
    else
    printf("%c Is a Consonent.",n);
}
