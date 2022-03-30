#include <stdio.h>

struct time
{
    int si;
    int fi;
} t[11];

int main(void)
{
    int n = 11, fa[12];
    int x = 0, k = 1;
    int i = 0, j = 0;

    t[0].si = 1;
    t[1].si = 3;
    t[2].si = 0;
    t[3].si = 5;
    t[4].si = 3;
    t[5].si = 5;
    t[6].si = 6;
    t[7].si = 8;
    t[8].si = 8;
    t[9].si = 2;
    t[10].si = 12;

    t[0].fi = 4;
    t[1].fi = 5;
    t[2].fi = 6;
    t[3].fi = 7;
    t[4].fi = 8;
    t[5].fi = 9;
    t[6].fi = 10;
    t[7].fi = 11;
    t[8].fi = 12;
    t[9].fi = 13;
    t[10].fi = 14;

    for (i = 0; i < n; i++)
    {
        if (t[i].si > t[j].fi)
        {
            fa[k] = i;
            j = i;
            k++;
        }
    }
    for (x = 0; x < k; x++)
    {
        printf("\n%d", fa[x]);
    }
}
