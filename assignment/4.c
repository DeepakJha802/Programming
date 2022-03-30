#include <stdio.h>
#include <conio.h>
void minmax(int, int);
int arr[100];
int min=0;
int max=0 ;
int main(void)
{
    int n;

    printf("Enter how many elements you want to take ");
    scanf("%d", &n);
    printf("Enter elements in array ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    max =arr[0];
    min=arr[0];

    minmax(0, n-1);
     printf("%d is the maximum number\n", max);
    printf("%d is the minimum number\n", min);
    return 0;
}

void minmax(int i, int j)
{
    int mid, mint, maxt;
    if (i == j)
    {
        max =arr[i];
        min =arr[i];
    }
    else if (i == j-1)
    {
        if (arr[i] > arr[j])
        {
            max = arr[i];
            min = arr[j];
        }
        else
        {
            max = arr[j];
            min = arr[i];
        }
    }
    else
    {
        mid = (i + j) / 2;
        minmax(i, mid);
        maxt = max;
        mint = min;
        minmax(mid + 1, j);
        if (maxt > max)

            max = maxt;

        if (mint < min)

            min = mint;

    }

}
