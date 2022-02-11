#include<stdio.h>
#include <stdbool.h>
int main (void)
{
    int T,A,B,X,Y;
    scanf("%d",&T);

    bool answers[T];

    for (int i = 0; i < T; i++)
    {
    scanf("%d %d %d %d",&A,&B,&X,&Y);
    if (X*Y>=A*B)
        answers[i] = true;
    else
        answers[i] = false;
    }

    for (int i = 0; i < T; i++)
    {
        if (answers[i])
            printf("YES\n");
        else
        printf("NO\n");
    }
}


// #include <stdio.h>
// int main (void)
// {
//     int T,A,B,X,Y,AB,XY;
//     scanf("%d",&T);
//     for (int i=0 ; i<T ; i++)
//     {
//     scanf("%d %d %d %d",&A,&B,&X,&Y);
//     AB = A*B ;
//     XY = X*Y ;
//     if (XY>=AB)
//     printf("YES\n");
//     else
//     printf("NO\n");
//     }
// }


