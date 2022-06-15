#include <stdio.h>

#define V 4

#define I 999

int main(void)
{
    int g[V][V] = {{0, 8, I, 1},
                   {I, 0, 1, I},
                   {4, I, 0, I},
                   {I, 2, 9, 0}};

    for (int k = 0; k < V; k++)
    {
        for (int i = 0; i < V; i++)
        {
            for (int j = 0; j < V; j++)
            {
                if (g[i][k] + g[k][j] < g[i][j])
                    g[i][j] = g[i][k] + g[k][j];
            }
        }
    }

    printf("\nShortest dist between every pair of vertices :- \n");

    printf("      1   2   3   4\n");
    printf("-------------------\n");

    for (int i = 0; i < V; i++)
    {
        printf("%d |", i + 1);

        for (int j = 0; j < V; j++)
        {
            if (g[i][j] == I)
                printf("%4s", "I");
            else
                printf("%4d", g[i][j]);
        }
        printf("\n");
    }
}
