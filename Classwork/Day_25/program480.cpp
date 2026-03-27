#include <iostream>
using namespace std;

#pragma pack(1)

// Node Class
class node
{
    public:
        int data;                                                   //  Member Variables Declaration
        node *next;
        node *prev;

        node(int No)                                                // Constructor
        {
            this -> data = No;                                      // Assigning Values
            this -> next = NULL;
            this -> prev = NULL;
        }
};

// Logic Class
class DoublyLLL
{
    public:
        node * first;                                               // Member Variables Declaration
        int iCount;

        DoublyLLL();                                                // Constructor

        void InsertFirst(int);                                      // Function Defination
        void InsertLast(int);                                       // Function Defination
        void InsertAtPos(int, int);                                 // Function Defination
        
        void DeleteFirst();                                         // Function Defination
        void DeleteLast();                                          // Function Defination
        void DeleteAtPos(int);                                      // Function Defination
        
        void Display();                                             // Function Defination
        int Count();                                                // Function Defination

};

DoublyLLL :: DoublyLLL()                                            // Constructor
{
    cout << "Linked List gets created.\n";
    
    this -> first = NULL;
    this -> iCount = 0;
}

void DoublyLLL :: InsertFirst(int No)                               // Function Defination
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

    iCount++;
}

void DoublyLLL :: InsertLast(int No)                                // Function Defination
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

    iCount++;
}

void DoublyLLL :: InsertAtPos(int No, int pos)                      // Function Defination
{}

void DoublyLLL :: DeleteFirst()                                     // Function Defination
{}

void DoublyLLL :: DeleteLast()                                      // Function Defination
{}

void DoublyLLL :: DeleteAtPos(int pos)                              // Function Defination
{}

void DoublyLLL :: Display()                                         // Function Defination
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

int DoublyLLL :: Count()                                            // Function Defination
{
    return this -> iCount;
}

// Main Method
int main()                                                          // Main Method
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

    delete dobj;

    return 0;
}