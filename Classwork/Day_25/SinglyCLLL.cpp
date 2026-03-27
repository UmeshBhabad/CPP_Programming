#include <iostream>
using namespace std;

#pragma pack(1)

template <class T>
class SinglyCLLLnode
{
    public:
        T data;
        SinglyCLLLnode<T> *next;

        SinglyCLLLnode(T No)
        {
            this -> data = No;
            this -> next = NULL;
        }
};

template <class T>
class SinglyCLLL
{
    public:
        SinglyCLLLnode<T> *first;
        SinglyCLLLnode<T> *last;
        int iCount;

    public:
        SinglyCLLL();

        void InsertFirst(T);

        void InsertLast(T);

        void InsertAtPos(T, int);

        void DeleteFirst();

        void DeleteLast();

        void DeleteAtPos(int);

        void Display();

        int Count();
};

template <class T>
SinglyCLLL<T> :: SinglyCLLL()
{
    this -> first = NULL;
    this -> last = NULL;
    this -> iCount = 0;
}

template <class T>
void SinglyCLLL<T> :: InsertFirst(T No)
{
    SinglyCLLLnode<T> *newn = NULL;

    newn = new SinglyCLLLnode<T>(No);

    if(this -> first == NULL && this -> last == NULL)
    {
        this -> first = newn;
        this -> last = newn;
    }
    else
    {
        newn -> next = this -> first;
        this -> first = newn;
    }
    this -> last -> next = first;
    this -> iCount++;
}

template <class T>
void SinglyCLLL<T> :: InsertLast(T No)
{
    SinglyCLLLnode<T> *newn = NULL;

    newn = new SinglyCLLLnode<T>(No);

    if(this -> first == NULL && this -> last == NULL)
    {
        this -> first = newn;
        this -> last = newn;
    }
    else
    {
        this -> last -> next = newn;
        this -> last = newn;
    }
    this -> last -> next = this -> first;
    this -> iCount++;
}

template <class T>
void SinglyCLLL<T> :: InsertAtPos(T No, int pos)
{
    if(pos < 1 || pos > this -> iCount + 1)
    {
        cout << "Invalid Position\n";
        return;
    }

    if(pos == 1)
    {
        this -> InsertFirst(No);
    }
    else if(pos == this -> iCount + 1)
    {
        this -> InsertLast(No);
    }
    else
    {
        SinglyCLLLnode<T> *newn = new SinglyCLLLnode<T>(No);

        SinglyCLLLnode<T> *temp = NULL;

        temp = first;

        for(int iCnt = 1; iCnt < pos - 1; iCnt++)
        {
            temp = temp -> next;
        }

        newn -> next = temp -> next;
        temp -> next = newn;
    }
    this -> iCount++;
}

template <class T>
void SinglyCLLL<T> :: DeleteFirst()
{
    SinglyCLLLnode<T> *temp = NULL;

    if(this -> first == NULL && this -> last == NULL)
    {
        return;
    }
    else if(this -> first == this -> last)
    {
        delete this -> first;
        this -> first = NULL;
        this -> last = NULL;
    }
    else
    {
        temp = this -> first;
        this -> first = this -> first -> next;
        delete temp;
    }
    this -> last -> next = first;
    this -> iCount--;
}

template <class T>
void SinglyCLLL<T> :: DeleteLast()
{
    SinglyCLLLnode<T> *temp = NULL;

    if(this -> first == NULL && this -> last == NULL)
    {
        return;
    }
    else if(this -> first == this -> last)
    {
        delete this -> first;
        this -> first = NULL;
        this -> last = NULL;
    }
    else
    {
        temp = this -> first;

        while(temp -> next -> next != this -> first)
        {
            temp = temp -> next;
        }

        this -> last = temp;
        delete this -> last -> next;
    }
    this -> last -> next = this -> first;
    this -> iCount--;
}

template <class T>
void SinglyCLLL<T> :: DeleteAtPos(int pos)
{
    if(pos < 1 || pos > this -> iCount)
    {
        cout << "Invalid position\n";
        return;
    }

    if(pos == 1)
    {
        this -> DeleteFirst();
    }
    else if(pos == this -> iCount)
    {
        this -> DeleteLast();
    }
    else
    {
        int iCnt = 0;
        SinglyCLLLnode<T> *temp = NULL;
        SinglyCLLLnode<T> *target = NULL;

        temp = first;

        for(iCnt = 1; iCnt < pos - 1; iCnt++)
        {
            temp = temp -> next;
        }
        target = temp -> next;
        temp -> next = target -> next;
        delete target;
    }
    this -> iCount--;
}

template <class T>
void SinglyCLLL<T> :: Display()
{
    SinglyCLLLnode<T> *temp = NULL;

    temp = first;
    
    do
    {
        cout << "| " << temp -> data << " | --> ";
        temp = temp -> next;
    }while(temp != this -> first);
    
    cout << "\n";
}

template <class T>
int SinglyCLLL<T> :: Count()
{
    return this -> iCount;
}

int main()
{
    SinglyCLLL<int> *obj = new SinglyCLLL<int>();

    obj->InsertFirst(51);
    obj->InsertFirst(21);
    obj->InsertFirst(11);

    obj->Display();
    cout << "Number of Nodes in Linked List : " << obj -> Count() << "\n";

    obj->InsertLast(101);
    obj->InsertLast(111);
    obj->InsertLast(151);

    obj->Display();
    cout << "Number of Nodes in Linked List : " << obj -> Count() << "\n";

    obj->InsertAtPos(121, 3);

    obj->Display();
    cout << "Number of Nodes in Linked List : " << obj -> Count() << "\n";

    obj->DeleteFirst();

    obj->Display();
    cout << "Number of Nodes in Linked List : " << obj -> Count() << "\n";

    obj->DeleteLast();

    obj->Display();
    cout << "Number of Nodes in Linked List : " << obj -> Count() << "\n";

    obj->DeleteAtPos(3);

    obj->Display();
    cout << "Number of Nodes in Linked List : " << obj -> Count() << "\n";

    delete obj;

    return 0;
}