#include <stdio.h>
int main(void)
{
    int t, m;
    char g[14];
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {

        int carlsen,chef;
        carlsen = chef =0;
        scanf("%d", &m);
        for (int j = 0; j < 14; j++)
        {
            scanf(" %c", &g[j]);
            if (g[j] == 'C')
                carlsen = carlsen + 2; //carsen += 2;
            else if (g[j] == 'N')
                chef = chef + 2;    //chef += 2;
            else if (g[j] == 'D'){
                carlsen = carlsen + 1; //carlsen++;
                chef = chef + 1;    //chef++;
            }
        }
        // for (int j = 0; j < 14; j++)

            if (carlsen > chef)
                printf("%d\n", 60 * m);
            else if(carlsen < chef)
                printf("%d\n", 40 * m);
            else if (carlsen == chef)
                printf("%d\n", 55 * m);
    }
}
