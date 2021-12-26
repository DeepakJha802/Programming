//DEEPAK KUMAR JHA
//10800120057
//CSE (A2)
#include<stdio.h>
#include<stdlib.h>
#define null 0
struct link
{
int data;
struct link *next,*prev;
};
typedef struct link list;
list *head=null,*p;
void add();
void display();
void main()
{
    printf("\nDEEPAK KUMAR JHA \n1080120057 \nCSE (A2)\n");
    add();
    display();
}
void add(void)
{
    int opt=1;
    list *temp;
    while(opt==1)
    {
        p=(list*)malloc(sizeof(list));
        printf("\nEnter Data To Add : ");
        scanf("%d",&p->data);
        if(head==null)
        {
            head=p;
            p->next=null;
            p->prev=null;
            temp=p;
        }
        else
        {
            temp->next=p;
            p->next=null;
            p->prev=temp;
            temp=p;
        }
        printf("You Have To add more If Yes Then Enter 1 Otherwise 0 : " );
        scanf("%d",&opt);
    }
}
void display()
{
    list *i;
    int nc=0;
    printf("Node \t Data \t Address \n");
    for(i=head;i!=null;i=i->next)
    {
        nc++;
        printf(" %d \t  %d\t %x\n",nc,i->data,i);
    }
}
