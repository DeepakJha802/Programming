#include <stdio.h>

int main(void)
{
    int a, b;
    scanf("%d %d", &a, &b);
    int A = 0, B = 0;
    for (int i = 1; i <= b; i++)
    {
        if (a <= b)
        {
            A =  (a * 3);
            B = (b * 2);
            if (A > B)
            {
               printf("%d",i);
            }
            a = A ;
            b = B ;
        }
    }
}
