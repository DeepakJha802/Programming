#include<stdio.h>
int main (void)
{
    int n ;
    scanf("%d",&n);
    for (int i = 1; i <= n; i++)
    {
        int s1 , s2 , s3 , s4;
        scanf("%d %d %d %d",&s1,&s2,&s3,&s4);
        if (s1>s2 && s3>s4 && s1>s4 && s3>s2)
        printf("YES\n");
        else if (s2>s1 && s4>s3 && s4>s1 && s2>s3)
        printf("YES\n");
        else if (s2>s1 && s3>s4 && s2>s4 && s3>s1)
        printf("YES\n");
        else if (s1>s2 && s4>s3 && s1>s3 && s4>s2)
        printf("YES\n");
        else
        printf("NO\n");
    }
}
