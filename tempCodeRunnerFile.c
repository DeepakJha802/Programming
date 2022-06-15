#include <stdio.h>

int main(void)
{
    int c, n, c_w, item;
    int used[10];
    float t_p;
    int i;
    int w[10];
    int v[10];

    printf("Enter the capacity of knapsack:\n");
    scanf("%d", &c);

    printf("Enter the number of items:\n");
    scanf("%d", &n);

    printf("Enter the w and v of %d item:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d %d",&w[i],&v[i]);
    }

    for (i = 0; i < n; ++i)
        used[i] = 0;

    c_w = c;
    while (c_w > 0)
    {
        item = -1;
        for (i = 0; i < n; ++i)
            if ((used[i] == 0) &&
                ((item == -1) || ((float) v[i] / w[i] > (float) v[item] / w[item])))
                item = i;

        used[item] = 1;
        c_w -= w[item];
        t_p += v[item];
        if (c_w >= 0)
            printf("Added object %d (%d Rs., %dKg) completely in the bag. Space left: %d.\n", item + 1, v[item], w[item], c_w);
        else
        {
            int item_percent = (int) ((1 + (float) c_w / w[item]) * 100);
            printf("Added %d%% (%d Rs., %dKg) of object %d in the bag.\n", item_percent, v[item], w[item], item + 1);
            t_p -= v[item];
            t_p += (1 + (float)c_w / w[item]) * v[item];
        }
    }

    printf("Filled the bag with objects worth %.2f Rs.\n", t_p);
}