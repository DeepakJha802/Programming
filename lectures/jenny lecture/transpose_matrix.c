#include<stdio.h>
int main(void)
{
    int r,c;
    printf("Enter the size of row and coloum : ");
    scanf("%d %d",&r,&c);
    int arr[r][c];
    printf("Enter the Elements of matrix : ");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            scanf("%d",&arr[i][j]);
        }
        printf("\n");
    }
    printf("Matrix is :-\n");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    printf("Transpose of matrix is :-\n");
    for(int i=0;i<c;i++)
    {
        for(int j=0;j<r;j++)
        {
            printf("%d ",arr[j][i]);
        }
        printf("\n");
    }

}

