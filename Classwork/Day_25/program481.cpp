#include <iostream>
using namespace std;

#pragma pack(1)

// Node Class
class node
{
    public:
        int data;
        node *next;
        node *prev;

        node(int No)
        {
            this -> data = No;
            this -> next = NULL;
            this -> prev = NULL;
        }
};

// Logic class
class DoublyLLL
{
    public:
        node * first;
        int iCount;

        DoublyLLL();

        void InsertFirst(int);
        void InsertLast(int);
        void InsertAtPos(int, int);
        
        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPos(int);
        
        void Display();
        int Count();

};

DoublyLLL :: DoublyLLL()
{
    cout << "Linked List gets created\n";
    
    this -> first = NULL;
    this -> iCount = 0;
}

void DoublyLLL :: InsertFirst(int No)
{
    node *newn = NULL;

    newn = new node(No);

    if(this -> first == NULL)
    {
        this -> first = newn;
    }
    else
    {
        newn -> next = this -> first;
        this -> first -> prev = newn;
        this -> first = newn;
    }

    this -> iCount++;
}

void DoublyLLL :: InsertLast(int No)
{
    node *newn = NULL;
    node *temp = NULL;

    newn = new node(No);

    if(this -> first == NULL)
    {
        this -> first = newn;
    }
    else
    {
        temp = this -> first;

        while(temp -> next != NULL)
        {
            temp = temp -> next;
        }

        temp -> next = newn;
        newn -> prev = temp;
    }

    this -> iCount++;
}

void DoublyLLL :: InsertAtPos(int No, int pos)
{}

void DoublyLLL :: DeleteFirst()
{
    if(this -> first == NULL)   // LL is empty
    {
        return;
    }
    else if (this -> first -> next == NULL)     // LL contains one node
    {
        delete this -> first;
        first = NULL;
    }
    else    // LL contains more than 1 node
    {
        this -> first = this -> first -> next;
        
        delete this -> first -> prev;
        this -> first -> prev = NULL;
    }
    this -> iCount--;
}

void DoublyLLL :: DeleteLast()
{
    node *temp = NULL;

    if(this -> first == NULL)   // LL is empty
    {
        return;
    }
    else if (this -> first -> next == NULL)     // LL contains one node
    {
        delete this -> first;
        first = NULL;
    }
    else    // LL contains more than 1 node
    {
        temp = this -> first;

        while(temp -> next -> next != NULL)
        {
            temp = temp -> next;
        }

        delete temp -> next;
        temp -> next = NULL;
    }
    this -> iCount--;
}

void DoublyLLL :: DeleteAtPos(int pos)
{}

void DoublyLLL :: Display()
{
    node *temp = NULL;

    temp = this -> first;

    cout<< "\nNULL <=>";
    while(temp != NULL)
    {
        cout << "|" << temp -> data<< "| <=> ";
        temp = temp -> next;
    }
    cout << "NULL\n";
}

int DoublyLLL :: Count()
{
    return this -> iCount;
}

// Main method
int main()
{
    DoublyLLL *dobj = new DoublyLLL();

    dobj -> InsertFirst(51);
    dobj -> InsertFirst(21);
    dobj -> InsertFirst(11);

    dobj -> Display();

    cout<< "Number of elements are : "<< dobj -> Count() << "\n";

    dobj -> InsertLast(101);
    dobj -> InsertLast(111);
    dobj -> InsertLast(121);

    dobj -> Display();

    cout<< "Number of elements are : "<< dobj -> Count() << "\n";

    dobj -> DeleteFirst();

    dobj -> Display();

    cout<< "Number of elements are : "<< dobj -> Count() << "\n";

    dobj -> DeleteLast();

    dobj -> Display();

    cout<< "Number of elements are : "<< dobj -> Count() << "\n";

    delete dobj;

    return 0;
}