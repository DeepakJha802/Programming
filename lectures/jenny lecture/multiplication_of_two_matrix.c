//wap to print multiplication of two matrix.
#include<stdio.h>
int main ()
{
    int m,n,p,q,i,j,k,sum;
    printf("Enter the rows and coloumns of 1st matrix :\n");
    scanf("%d %d",&m,&n);
    printf("Enter the rows and coloumn of 2nd matrix :\n");
    scanf("%d %d",&p,&q);
    int a[m][n],b[p][q],c[n][q];
    if(n==p)
    {
        printf("Enter the elements of 1st matrix :\n");
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                scanf("%d",&a[i][j]);
            }
        }
        printf("Enter the elements of 2nd matrix :\n");
        for(i=0;i<p;i++)
        {
            for(j=0;j<q;j++)
            {
                scanf("%d",&b[i][j]);
            }
        }
        printf("First matrix is :\n");
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                printf("%d ",a[i][j]);
            }
            printf("\n");
        }
        printf("Second matrix is \n");
        for(i=0;i<p;i++)
        {
            for(j=0;j<q;j++)
            {
                printf("%d ",b[i][j]);
            }
            printf("\n");
        }
        for(i=0;i<m;i++)
        {
            for(j=0;j<q
            ;j++)
            {
                sum=0;
                for(k=0;k<m;k++)
                {
                    sum=sum+(a[i][k]*b[k][j]);                        
                }
                c[i][j]=sum;
                  printf("%d ",c[i][j]);
                
            }
        }  
       /* printf("Multiplication of two matrix is :\n");
        for(i=0;i<m;i++)
        {
            for(j=0;j<q;j++)
            {
                printf("%d ",c[i][j]);
            }
            printf("\n");
        }*/
    }
    else
    {
        printf("\nCan not multiply.");
    }
}
