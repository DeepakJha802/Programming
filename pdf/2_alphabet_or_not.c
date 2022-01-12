#include <stdio.h>
int main (void)
{
    char a ;
    printf("\nEnter The Character : ");
    scanf("%c",&a);
    if ((a >= 'a' && a <= 'z') || (a >= 'A' && a <= 'Z'))
    printf("%c Is a Alphabet.",a);
    else
    printf("%c Is Not Alphabet.",a);

}
