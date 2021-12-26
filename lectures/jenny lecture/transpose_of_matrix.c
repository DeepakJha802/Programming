//wap to print transpose of matrix.
#include<stdio.h>
int main ()
{
    int i,j,m,n;
    printf("Enter the ROWS and COLOUMNS of matrix :\n");
    scanf("%d %d",&m,&n);
    int a[m][n];
    printf("Enter the elements of matrix :\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Matrix is :\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    printf("Transpose of a matrix is :\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("%d ",a[j][i]);
        }
        printf("\n");
    }
}
