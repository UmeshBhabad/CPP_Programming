// Implementing Stack using Linked List

#include <iostream>
using namespace std;

#pragma pack(1)

class Stacknode
{
    public:
        int data;
        Stacknode*next;

        Stacknode(int No)
        {
            this -> data = No;
            this -> next = NULL;
        }
};

class Stack
{
    private:
        Stacknode *first;
        int iCount;

    public:
        Stack();
        void push(int);     // InsertFirst
        int pop();          // DeleteFirst
        int peep();
        void Display();
        int Count();
};

Stack :: Stack()
{}

void Stack :: push(int No)
{}

int Stack :: pop()
{
    return 0;
}

int Stack :: peep()
{
    return 0;
}

void Stack :: Display()
{}

int Stack :: Count()
{
    return this -> iCount;
}

int main()
{
    Stack *sobj = new Stack();

    delete sobj;

    return 0;
}