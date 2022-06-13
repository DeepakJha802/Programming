#include <stdio.h>
int addNumbers(int a, int b);        

int main(void)
{
    int n1,n2,sum;

    printf("Enters two numbers: ");
    scanf("%d %d",&n1,&n2);

    sum = n1+n2;   
    printf("sum = %d\n",sum);
    return 0;
}
