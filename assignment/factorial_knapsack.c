#include<stdio.h>
#include<conio.h>
int m;
int n;
float total_profit=0;
struct knapsack{
    int p;
    int w;
    float cost;
    float x;
    int item_no;
}s[50];
void input(void)
{
    printf("---------------------------------------------\n");
    printf("Name - Deepak Kumar Jha\n");
    printf("Roll No - 10800120057\n");
    printf("Batch - A2\n");
    printf("---------------------------------------------\n\n");
    printf("Enter the Knapsack capacity : ");
    scanf("%d",&m);
    printf("Enter total number of items : ");
    scanf("%d",&n);
    for(int i=1 ; i<=n ; i++)
    {
        printf("Enter the Profits of %d item : ",i);
        scanf("%d",&s[i].p);
        printf("Enter the Weight of %d item : ",i);
        scanf("%d",&s[i].w);
        s[i].cost=(float)s[i].p/(float)s[i].w;
        s[i].item_no=i+1;
    }
}
void sort(void)
{
    int i,j,t1,t2,t4;
    float t3;
    for (i=1 ; i<=n ; i++)
    {
        for(j=1 ; j<=n-1-i ; j++)
        {
            if(s[j].cost<s[j+1].cost)
            {
                t1=s[j].p;
                t2=s[j].w;
                t3=s[j].cost;
                t4=s[j].item_no;
                s[j].p=s[j+1].p;
                s[j].w=s[j+1].w;
                s[j].cost=s[j+1].cost;
                s[j].item_no=s[j+1].item_no;
                s[j+1].p=t1;
                s[j+1].w=t2;
                s[j+1].cost=t3;
                s[j+1].item_no=t4;
            }
        }
    }

}
int calculate(void)
{
    int i=0;
    while(m>0)
    {
        if(s[i].w<=m)
        {
            m-=s[i].w;
            s[i].x=1.0;
            total_profit+=s[i].p*s[i].x;
            i++;
        }
        else
        {
            s[i].x=(float)m/(float)s[i].w;
            m-=(float)m/(float)s[i].w;
            total_profit+=s[i].p*s[i].x;
            break;
        }
    }
    return i+1;
}
void display(int l)
{
    printf("\nTotal Profit = %.2f",total_profit);
    printf("\nSolution Set : ");
    for(int i=1;i<=l;i++)
    printf("\n%.2f(Item %d)",s[i].x,s[i].item_no);
}
int main(void)
{
    input();
    sort();
    display(calculate());
    return 0;
}
