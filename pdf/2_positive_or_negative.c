#include <stdio.h>
int main (void)
{
    int n ;
    printf("\nEnter The Number :\n");
    scanf("%d",&n);
    if (n>0)
    printf("Positive Number.");
    else if (n<0)
    printf("Negative Number.");
    else
    printf("Number Is 0.");
}
