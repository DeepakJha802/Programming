#include <stdio.h>
#include <malloc.h>
struct Node
{
    int val;
    struct Node *next;
};
typedef struct Node N;
N *start = NULL, *tmp, *ptr;
void CreateList(int v)
{
    ptr = (N *)malloc(sizeof(N));
    ptr->val = v;
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
void DisplayList(N *tmp, int n)
{
    if (n > 0)
    {
        printf("%d ", tmp->val);
        DisplayList(tmp->next, n - 1);
        printf("%d ", tmp->val);
    }
    else
        printf("\nLinked list in Backward order : ");
}
int main(void)
{
    int n, i;
    printf("Enter number of nodes : ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        int c;
        scanf("%d", &c);
        CreateList(c);
    }
    printf("\nLinked list in Forward order : ");
    DisplayList(start, n);
    return 0;
}
