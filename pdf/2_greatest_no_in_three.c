#include <stdio.h>
int main (void)
{
    int n1 , n2 , n3 ;
    printf("\nEnter Three Numbers :\n");
    scanf("%d %d %d",&n1,&n2,&n3);
    if (n1>n2 && n1>n3)
    printf("%d Is The Greatest Among Three.",n1);
    else if (n2>n3 && n2>n1)
    printf("%d Is The Greatest Among Three.",n2);
    else
    printf("%d Is The Greatest Among Three.",n3);
}
