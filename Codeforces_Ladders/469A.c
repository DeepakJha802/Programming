#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main(void)
{
    int n;
    scanf("%d", &n);
    char a[n], b[n-1];
    bool present = false;
    for (int i = 0; i < n; i++)
    {
        scanf("%d %d",&a[i],&b[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i] == n || b[i] == n)
        {
            present = true ;
        }
        else
        present =  false ;
    }
    if (present)
    printf("I become the guy.");
    else
    printf("Oh, my keyboard!");
}
