#include<stdio.h>
int main (void)
{
    int n , h;
    scanf("%d %d",&n,&h);
    int width = 0;
    for (int i = 1; i <= n;i++)
    {
        int hight_person;
        scanf("%d",&hight_person);
        if (hight_person <= h)
        {
           width = width + 1;
        }
        else if (hight_person > h)
        {
            width = width + 2;
        }
    }
        printf("%d",width);
}
