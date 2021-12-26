#include<stdio.h>
#define null 0

struct dlink //doubly linked list
{
    int data; //stores the data
    struct link *next, *prev; //self referential pointer type variable
};
typedef struct dlink dlist;
dlist *head=null, *p;

//function prototypes
void add(); //to add elements to the dlist
void display(); // to display those elements

//main function
void main()
{
    add(); //function call
    display(); //function call
}
void add()
{
    int opt=1;
    dlist *temp;
    while(opt==1)
    {
        p=(dlist*)malloc(sizeof(dlist));
        printf("Enter data to add : ");
        scanf("%d",&p->data);
        if(head==null) //for the first node
        {
            head=p; //assign newly created node address to head
            p->next=null; //last part of a node is always grounded
            p->prev=null; //first part of first node is always grounded (in doubly linked list)
            temp=p; //contains the address of the current node
        }
        else
        {
            temp->next=p; //making link with new node
            p->next=null; //last part of last node is always grounded
            p->prev=temp; //making link with previous and current node
            temp=p; //contains the address of the current node
        }
        printf("Wanna add more? (1/0) : " );
        scanf("%d",&opt);
    }
}
void display()
{
    dlist *i;
    int nc=0; //node count
    printf("\nForward Direction...\n");
    printf("Node \t Data\n");
    for(i=head;i!=null;i=i->next)
    {
        nc++;
        printf(" %d \t  %d\n",nc,i->data);
    }
    printf("\nBackward Direction...\n");
    printf("Node \t Data\n");
    for(i=p;i!=null;i=i->prev)
    {
        printf(" %d \t  %d\n",nc,i->data);
        nc--;
    }
}