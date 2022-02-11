#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
int main (void)
{
       int i, j;
       int temp ;

    bool one_found = false;

    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= 5; j++)
        {
            scanf("%d", &temp);

            if (temp == 1)
            {
                one_found = true;
                break;
            }
        }
        printf("\n");

        if (one_found)
        break;
    }

    printf("%d\n",abs(i-3) + abs(j-3));

}
