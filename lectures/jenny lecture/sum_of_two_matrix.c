//wap to print the sum of two matrix.
#include<stdio.h>
int main ()
{
    int i,j,m,n,p,q;     
    printf("Enter The ROWS and COLOUMNS of 1st. matrix :\n");
    scanf("%d %d",&m,&n);
    printf("Enter The ROWS and COLOUMNS of 2nd. matrix :\n");
    scanf("%d %d",&p,&q);
    int a[m][n],b[p][q],c[m][q];
    if (m==p && n==q)
    {
        printf("Enter the elements of 1st. matrix :\n");
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                scanf("%d",&a[i][j]);
            }
        }
         printf("Enter the elements of 2nd. matrix :\n");
        for(i=0;i<p;i++)
        {
            for(j=0;j<q;j++)
            {
                scanf("%d",&b[i][j]);
            }
        }
        printf("First Matrix is :\n");
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                printf("%d ",a[i][j]);
            }
            printf("\n");
        }
        printf("Second Matrix is :\n");
        for(i=0;i<p;i++)
        {
            for(j=0;j<q;j++)
            {
                printf("%d ",b[i][j]);
            }
            printf("\n");
        }
        printf("sum of two matrix :\n");
        for(i=0;i<m;i++)
        {
            for(j=0;j<q;j++)
            {
                c[i][j]=a[i][j]+b[i][j];
                printf("%d ",c[i][j]);
            }
            printf("\n");
        }
    }
    else
    {
        printf("\nCan't sum of two matrix :");
    }
}
