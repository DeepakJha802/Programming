//DEEPAK KUMAR JHA
//10800120057
//CSE (A2)
#include <stdio.h>
#include <stdlib.h>
#define NULL 0
struct dlink{
int data;
struct dlink *next,*prev;
};
typedef struct dlink dlist;
dlist *head=NULL,*p;
void add()
{
    char ch='Y';
    dlist *t;
    while(ch=='Y'||ch=='y')
    {
        p=(dlist*)malloc(sizeof(dlist));
        printf("\nEnter data to add");
        scanf("%d",&p->data);
        if(head==NULL)
        {
            head=p;
            p->next=NULL;
            p->prev=NULL;
            t=p;
        }
        else
        {
            t->next=p;
            p->next=NULL;
            p->prev=t;
            t=p;
        }
        printf("Do you want to add more(Y for yes and N for no): ");
        scanf("%c",&ch);
    }
}
void display()
{
    dlist *i=head;
    if(head==NULL)
    {
        printf("There are no linked list exist");
    }
    for(i=head;i!=NULL;i=i->next)
    {
        printf("\nThe data elements in the linked list are: ");
        printf("\t%d",&i->data);
    }
}
void del()
{
    dlist *i=head;
      char ch='Y';
      int it;
    dlist *t;
    while(ch=='Y'||ch=='y')
    {
    if(head==NULL)
        printf("There are no linked list exist");
    else
    {
        printf("Enter the data to be deleted: ");
        scanf("%d",&it);
        for(i=head;i!=NULL;i=i->next)
        {

            if(i->data==head->data)
            {
                t=i;
                head->next->prev=head->prev;
                head=head->next;
                free(t);
            }
            else
            {
                if(i->next==NULL)
                {
                  i->prev->next=NULL;
                }
                else
                {
                    t=i;
                    i->prev->next=i->next;
                    i->next->prev=i->prev;
                }
            }

        }
    }
       printf("Do you want to delete more(Y for yes and N for no): ");
       scanf("%c",&ch);
    }

}
void main(void)
{
    int choice;
    printf("1.INSERT\n2.DELETE\n3.DISPLAY\n4.EXIT");
    while(1)
    {
    printf("\nEnter your choice: ");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
            add();
               break;
        case 2:
            del();
               break;
        case 3:
            display();
               break;
        case 4:exit(0);
        default:printf("\nINVALID CHOICE!REENTER TYOUR CHOICE");
                break;

      }
    }
}
