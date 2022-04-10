#include<stdio.h>
int main (void)
{
    int n ;
    scanf("%d",&n);
    int room = 0;
    for (int i = 1; i <= n; i++)
    {
        int total , capacity;
        scanf("%d %d",&total,&capacity);
        if (total+1 < capacity)
        {
            room++;
        }
        else if (total == capacity)
        {
            room;
        }
    }
    printf("%d",room);
}
