// DEEPAK KUMAR JHA
// 10800120057
// Group - (2)
// Question no 7. -- static queue
#include <stdio.h>

int queue[10];
int front_index = -1;
int rear_index = -1;

void enqueue(int);
int peek(void);
void dequeue(void);
_Bool is_empty(void);
_Bool is_full(void);

int main(void)
{
    puts("Choice   Operation\n"
         "   1     Enqueue  \n"
         "   2     Peek     \n"
         "   3     Dequeue  \n"
         "   4     Exit     ");

    int temp;

    while (1)
    {
        int choice;
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        if (choice == 1)
        {
            if (is_full())
            {
                printf("The queue is full\n");
            }

            else
            {
                printf("Enter an integer: ");
                scanf("%d", &temp);

                enqueue(temp);

                printf("Enqueue successful\n");
            }
        }

        else if (choice == 2)
        {
            if (is_empty())
            {
                printf("The queue is empty\n");
            }

            else
            {
                printf("%d\n", peek());
            }
        }

        else if (choice == 3)
        {
            if (is_empty())
            {
                printf("The queue is empty\n");
            }

            else
            {
                dequeue();

                printf("Dequeue successful\n");
            }
        }

        else if (choice == 4)
        {
            break;
        }
    }

    return 0;
}

void enqueue(int num)
{
    if (front_index == -1)
        front_index = 0;

    (rear_index)++;

    queue[rear_index] = num;
}

int peek(void)
{
    return queue[front_index];
}

void dequeue(void)
{
    if (front_index == rear_index)
    {
        front_index = -1;
        rear_index = -1;
    }

    else
    {
        (front_index)++;
    }
}

_Bool is_empty(void)
{
    return front_index == -1;
}

_Bool is_full(void)
{
    return rear_index == 9;
}
