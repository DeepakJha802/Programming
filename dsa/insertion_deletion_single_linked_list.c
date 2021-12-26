//DEEPAK KUMAR JHA
//10800120057
//CSE (A2)
#include <stdio.h>
#include <malloc.h>
struct node
{
    int val;
    struct node *next;
};
typedef struct node N;
N *start = NULL, *tmp, *ptr;
void add()
{
    ptr = (N *)malloc(sizeof(N));
    printf("Enter value : ");
    scanf("%d", &ptr->val);
    ptr->next = NULL;
    if (start == NULL)
    {
        start = ptr;
        tmp = ptr;
    }
    else
    {
        tmp->next = ptr;
        tmp = ptr;
    }
}
void List()
{
    int n=0;
    printf("Element\t Address\n");
    tmp = start;
    while (tmp != NULL)
    {
        ptr++;
        printf("%d\t %x\n",tmp->val,tmp);
        tmp = tmp->next;
    }
    printf("\n");
}
void insert()
{
    if (start == NULL)
    {
        printf("\nList is Empty.");
    }
    else
    {
        int n;
        printf("Enter value after which you want to insert : ");
        scanf("%d", &n);
        ptr = (N *)malloc(sizeof(N));
        printf("Enter value to insert : ");
        scanf("%d", &ptr->val);
        tmp = start;
        while (tmp->val != n && tmp != NULL)
        {
            tmp = tmp->next;
        }
        if (tmp != NULL)
        {
            ptr->next = tmp->next;
            tmp->next = ptr;
        }
        else
        {
            tmp->next = ptr;
        }
    }
}
void delete()
{
    if(start==NULL)
    {
        printf("List is empty.");
    }
    else
    {
        int n;
        printf("Enter element which you have to delete : ");
        scanf("%d",&n);
        tmp=start;
        if(tmp->val==n)
        {
            tmp=start;
            start=tmp->next;
            free(tmp);
        }
        else
        {
            int flag=0;
            while(tmp->next!=NULL)
            {
                if(tmp->next->val==n)
                {
                    flag=1;
                    break;
                }
                tmp=tmp->next;
            }
            if(flag==1) 
                tmp->next=tmp->next->next;
            else      
                printf("Value not exist in the list.");
        }
    }
}
void main()
{
    int ch;
    printf("\nDEEPAK KUMAR JHA \n1080120057 \nCSE (A2)");
    do
    {
        printf("\n1. Add Element in the list.");
        printf("\n2. List.");
        printf("\n3. Insert Element.");
        printf("\n4. Delete Element.");
        printf("\n5. Exit");
        printf("\nEnter your choice : ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            add();
            break;
        case 2:
            List();
            break;
        case 3:
            insert();
            break;
        case 4:
            delete();
            break;
        case 5:
            printf("End Program.");
            break;
        default:
            printf("\nInvalid Choice!");
        }
    } while (ch != 5);
}