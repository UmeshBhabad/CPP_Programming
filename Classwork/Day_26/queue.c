#include <stdio.h>
#include <stdlib.h>

struct QueueNode
{
    int data;
    struct QueueNode* next;
};

void enqueue(struct QueueNode **first, int no)
{
    struct QueueNode *newn = NULL;

    newn = (struct QueueNode *)malloc(sizeof(struct QueueNode));

    newn -> data = no;
    newn -> next = NULL;

    if(*first == NULL)
    {
        *first = newn;
    }
    else
    {
        struct QueueNode *temp = NULL;
        temp = *first;
        
        while(temp -> next != NULL)
        {
            temp = temp -> next;
        }

        temp -> next = newn;
    }
}

int dequeue(struct QueueNode **first)
{
    int Value = 0;

    if(*first == NULL)
    {
        printf("Queue is empty\n");
        return -1;
    }

    Value = (*first) -> data;

    if((*first) -> next == NULL)
    {
        free(*first);
        *first = NULL;
    }
    else
    {
        struct QueueNode *temp = NULL;
        temp = *first;
        (*first) = (*first) -> next;
        free(temp);
    }

    return Value;
}

void Display(struct QueueNode *first)
{
    if(first == NULL)
    {
        printf("Queue is empty\n");
        return;
    }

    printf("\n");
    while(first != NULL)
    {
        printf("| %d |--", first -> data);
        first = first -> next;
    }
    printf("\n");
}

int Count(struct QueueNode *first)
{
    int iCount = 0;

    while(first != NULL)
    {
        iCount++;
        first = first -> next;
    }

    return iCount;
}

int main()
{
    struct QueueNode *head = NULL;

    enqueue(&head, 11);
    enqueue(&head, 21);
    enqueue(&head, 51);

    Display(head);

    printf("Number of Nodes : %d\n", Count(head));

    dequeue(&head);

    Display(head);

    printf("Number of Nodes : %d\n", Count(head));

    return 0;
}