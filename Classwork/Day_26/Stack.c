#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct StackNode
{
    int data;
    struct StackNode *next;
};

typedef struct StackNode NODE;
typedef struct StackNode *PNODE;
typedef struct StackNode **PPNODE;

bool isEmpty(PNODE first)
{
    if(first == NULL)
    {
        return true;
    }
    return false;
}
void push(PPNODE first, int no)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn -> data = no;
    newn -> next = NULL;


    if(*first == NULL)
    {
        *first = newn;
    }
    else
    {
        newn -> next = *first;
        *first = newn;
    }
}

int pop(PPNODE first)
{
    int Value = 0;

    if(isEmpty(*first))
    {
        printf("Stack is Empty\n");
        return -1;
    }
    else if((*first) -> next == NULL)
    {
        free(*first);
        *first = NULL;
    }
    
    PNODE temp = *first;

    Value = temp -> data;

    *first = (*first) -> next;

    free(temp);

    return Value;
}

int peek(PNODE first)
{
    int Value = 0;

    if(isEmpty(first))
    {
        printf("Stack is Empty\n");
        return -1;
    }

    Value = first -> data;

    return Value;
}

void Display(PNODE first)
{
    if(isEmpty(first))
    {
        printf("Stack is Empty\n");
        return;
    }
    printf("\n");
    while(first != NULL)
    {
        printf("|\t%d\t|\n", first -> data);
        printf("|\t  \t|\n");
        first = first -> next;
    }
    printf("|---------------|\n");
}

int Count(PNODE first)
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
    PNODE head = NULL;

    push(&head, 51);
    push(&head, 21);
    push(&head, 11);

    Display(head);

    int iRet = 0;

    iRet = Count(head);

    printf("Number of nodes are : %d\n", iRet);

    iRet = peek(head);

    printf("Top element is : %d\n", iRet);

    iRet = pop(&head);

    printf("Deleted Element : %d\n", iRet);

    Display(head);

    iRet = Count(head);
    printf("Number of nodes are : %d\n", iRet);

    return 0;
}