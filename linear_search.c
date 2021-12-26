#include<stdio.h>
#include<stdlib.h>

int linearsearch(int, int *, int);

int main()
{
    int search,c,n;
    int *ptr,i;
    printf("Enter the size of array : ");
    scanf("%d",&n);

    ptr =(int*)malloc(sizeof(int)*n);
    printf("Enter the numbers : ");
    for(i=0;i<n;i++)
    {
        *(ptr+i)=rand()%101;
    }
    for (i=0;i<n;i++)
    {
        printf(" %d ",*(ptr+i));
    }

    printf("Enter a number to search :\n");
    scanf("%d",&search);

    linearsearch(search, ptr, n);
    return 0;
}

int linearsearch(int x,int *y,int z)
{
    int i=0;
    for (i=0;i<z;i++)
    {
        if (*(y+1) == x)
        {
            printf("%d is present at location %d.\n",x,(y+1));
            break;
        }
    }
    if (i == z)
    printf("%d is not present in the array.\n",x);
    else
    {
        if (i==0)
        {
        printf("it is best case");
        }
        else if (i==(z-1))
        {
            printf("it is worst case");
        }
        else{
            printf("it is avarage case");
        }
    }
}