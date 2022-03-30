#include <stdio.h>
void display(int *L,int n)
{
    int i;
    printf("\nAfter Sorting : ");
    for(i=0;i<n;i++)
       printf("%d ",L[i]);
}
void sort(int *L, int n)
{
    int p,i,j;
    for(i=0;i<n;i++)
    {
        p = L[i];
        j = i-1;
        while(j>=0&&p<L[j])
        {
            L[j+1] = L[j];
            j = j-1;
        }
        L[j+1] = p;
    }
}
void search(int *arr,int low, int high)
{
    int n,flag = 0;
    printf("Enter key for searching : ");
    scanf("%d",&n);
    sort(arr,high+1);
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (*(arr + mid) > n)
            high = mid - 1;
        else if (*(arr + mid) < n)
            low = mid + 1;
        else
        {
            flag = 1;
            break;
        }
    }
    if (flag == 1)
        printf("\n%d exists in the array",n);
    else
        printf("\n%d doesn't exist in the array",n);
}
int main(void)
{
    int n,i,ch;
    printf("Enter size of the array : ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d elements into the array :\n",n);
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    printf("\n1. Insertion Sort.");
    printf("\n2. Search whether a key exists in the array.");
    printf("\nEnter your choice : ");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1 : sort(arr,n);
                 display(arr,n);
                 break;
        case 2 : search(arr,0,n-1); break;
        default : printf("Invalid choice!!"); break;
    }
    return 0;
}
