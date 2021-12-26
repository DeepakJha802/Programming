#include <stdio.h>
#include <malloc.h>
int c = 0;
struct Node
{
    int val;
    struct Node *prev;
    struct Node *next;
};
typedef struct Node N;
N *head = NULL, *tmp, *ptr;
void CreateList(void)
{
    tmp = (N *)malloc(sizeof(N));
    printf("Enter The value : ");
    scanf("%d", &tmp->val);
    tmp->next = NULL;
    if (head == NULL)
    {
        ptr = tmp;
        head = tmp;
        tmp->prev = NULL;
    }
    else
    {
        ptr->next = tmp;
        tmp->prev = ptr;
        ptr = tmp;
    }
}
void DisplayList(void)
{
    N *i, *j;
    printf("\nDouble linked list in forward direction is :");
    for (i = head; i->next != NULL; i = i->next)
    {
        c++;
        printf("\n%d is the data\t %d is the node number\t %p is the address", i->val, c, i);
    }
    printf("\n%d is the data\t %d is the node number\t %p is the address", i->val, c++, i);
    printf("\n\n%d is the total number of nodes present\n", c);
    printf("\nDouble linked list in backward direction is :");
    for (j = i; j != NULL; j = j->prev)
    {
        printf("\n%d is the data\t %d is the node number\t %p is the address", j->val, c, j);
        c--;
    }
}
void DeleteAny(void)
{
    int fl = 0, it;
    N *i, *t;
    if (head == NULL)
    {
        printf("\nEmpty List\n");
    }
    else
    {
        printf("Enter data to delete : ");
        scanf("%d", &it);
        for (i = head; i != NULL; i = i->next)
        {
            if (i->val == it)
            {
                fl = 1;
                if (i->val == head->val)
                {
                    t = i;
                    head->next->prev = head->prev;
                    head = head->next;
                    free(t);
                    printf("\nFirst Node Deleted");
                    return;
                }
                else
                {
                    t = i;
                    if (i->next == NULL)
                    {
                        i->prev->next = NULL;
                        free(i);
                        printf("\nLast Node Deleted");
                    }
                    else
                    {
                        i->prev->next = i->next;
                        i->next->prev = i->prev;
                        printf("Item Deleted");
                    }
                    return;
                }
            }
        }
        if (fl == 0)
        {
            printf("\nData not found in Linked list");
        }
    }
}
int main(void)
{
    int ch;
    do
    {
        printf("\n1 Create List.");
        printf("\n2 Display List.");
        printf("\n3 Delete any node.");
        printf("\n4 Exit.");
        printf("\nEnter your choice : ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            CreateList();
            break;
        case 2:
            DisplayList();
            break;
        case 3:
            DeleteAny();
            break;
        case 4:
            printf("End of Program\n");
            break;
        default:
            printf("\nInvalid Choice!!\n");
        }

    } while (ch != 4);
}
