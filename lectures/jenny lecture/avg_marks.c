//wap to find sum of marks of 5 student by using array.
#include<stdio.h>
int main(void)
{
    int marks[5],i,sum=0,avg;
    printf("Enter the marks of five students :\n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&marks[i]);
        sum += marks[i];
    }
    avg=sum/5;
    printf("Average marks of five students : %d",avg);
}
