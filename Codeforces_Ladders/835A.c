#include <stdio.h>


int main(void)
{
    int t, f, s, f1, s1;
    scanf("%d %d %d %d %d", &t, &f, &s, &f1, &s1);
    if (((t * f) + (f1 * 2)) > ((t * s) + (s1 * 2)))
    {
        printf("Second\n");
    }
    else if (((t * f) + (f1 * 2)) < ((t * s) + (s1 * 2)))
    {
        printf("First\n");
    }
    else
    {
        printf("Friendship\n");
    }
}
