#include <iostream>
using namespace std;

#pragma pack(1)

//  Node Class
class node
{
    public:
        int data;
        node *next;
        node *prev;

        node(int No)                        // Constructor
        {
            data = No;
            next = NULL;
            prev = NULL;
        }
};

// Logic Class
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
    
}

void DoublyLLL :: InsertFirst(int No)
{}

void DoublyLLL :: InsertLast(int No)
{}

void DoublyLLL :: InsertAtPos(int No, int pos)
{}

void DoublyLLL :: DeleteFirst()
{}

void DoublyLLL :: DeleteLast()
{}

void DoublyLLL :: DeleteAtPos(int pos)
{}

void DoublyLLL :: Display()
{}

int DoublyLLL :: Count()
{
    return iCount;
}

int main()
{
    DoublyLLL *dobj = new DoublyLLL();

    return 0;
}