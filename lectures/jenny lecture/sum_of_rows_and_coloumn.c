//wap in c to print sum individual rows and coloumn.
#include<stdio.h>
int main ()
{
    int i,j,sum_row,sum_col,m,n;
    printf("Enter the ROWS and COLOUMNS of matrix :\n");
    scanf("%d %d",&m,&n);
    int a[m][n];
   // if(m==n)
   // {    
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
    for(i=0;i<m;i++)
    {
    sum_row=sum_col=0;
        for(j=0;j<n;j++)
        {
        sum_row=sum_row+a[i][j];
        sum_col=sum_col+a[j][i];
        }
        printf("\nsum of row = %d  sum of coloumn = %d",sum_row,sum_col);
    }
   // }
   /* else
    {
        printf("Can't find the sum of row and coloumn.");
    }*/
}
