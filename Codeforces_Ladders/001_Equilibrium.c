#include<stdio.h>
int main(void)
{
    int n,x,y,z,sum_i=0,sum_j=0,sum_k=0;
      // printf("Enter the no of input : ");
    scanf("%d",&n);
    for (int i=1;i<=n;i++)
    {
        // printf("Enter The Co-ordinates of Vector %d :\n",i);
        scanf("%d %d %d",&x,&y,&z);
        sum_i = sum_i + x ;
        sum_j = sum_j + y ;
        sum_k = sum_k + z ;
    }
    if (sum_i == 0 && sum_j == 0 && sum_k == 0)
    printf("YES");
    else
    printf("NO");
}

// #include<stdio.h>
// int main(void)
// {
//     int n,x,y,z,sum_i=0,sum_j=0,sum_k=0;
//     printf("Enter the no of input : ");
//     scanf("%d",&n);
//     while (n--)
//     {
//          printf("Enter The Co-ordinates of Vector %d :\n",n+1);
//          scanf("%d %d %d",&x,&y,&z);
//          sum_i = sum_i + x ;
//          sum_j = sum_j + y ;
//          sum_k = sum_k + z ;
//     }
//     if (sum_i == 0 && sum_j == 0 && sum_k == 0)
//     printf("Yes");
//     else
//     printf("NO");
// }
