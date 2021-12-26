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
void displayList()
{
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
        printf("\nList is Empty!");
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
void main()
{
    int ch;
    printf("\nDEEPAK KUMAR JHA \n1080120057 \nCSE (A2)");
    do
    {
        printf("\n\n1. Add Element in the list.");
        printf("\n2. List.");
        printf("\n3. Insert Element.");
        printf("\n4. Exit.");
        printf("\nEnter your choice : ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            add();
            break;
        case 2:
            displayList();
            break;
        case 3:
            insert();
            break;
        case 4:
            printf("End of Program.");
            break;
        default:
            printf("\nInvalid Choice!");
        }
    } while (ch != 4);
}
