#include <iostream>
using namespace std;

#pragma pack(1)

class SinglyCLLLnode
{
    public:
        int data;
        SinglyCLLLnode *next;

        SinglyCLLLnode(int No)
        {
            this->data = No;
            this -> next = NULL;
        }
};

class SinglyCLLL
{
    public:
        SinglyCLLLnode *first;
        SinglyCLLLnode *last;
        int iCount;

    public:
        SinglyCLLL()
        {
            this -> first = NULL;
            this -> last = NULL;
            this -> iCount = 0;
        }

        void InsertFirst(int No)
        {
            SinglyCLLLnode *newn = NULL;

            newn = new SinglyCLLLnode(No);

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

        void InsertLast(int No)
        {
            SinglyCLLLnode *newn = NULL;

            newn = new SinglyCLLLnode(No);

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

        void InsertAtPos(int No, int pos)
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
                SinglyCLLLnode *newn = new SinglyCLLLnode(No);

                SinglyCLLLnode *temp = NULL;

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

        void DeleteFirst()
        {
            SinglyCLLLnode *temp = NULL;

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

        void DeleteLast()
        {
            SinglyCLLLnode *temp = NULL;

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

        void DeleteAtPos(int pos)
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
                SinglyCLLLnode *temp = NULL;
                SinglyCLLLnode *target = NULL;

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

        void Display()
        {
            SinglyCLLLnode *temp = NULL;

            temp = first;
            
            do
            {
                cout << "| " << temp -> data << " | --> ";
                temp = temp -> next;
            }while(temp != this -> first);
            
            cout << "\n";
        }

        int Count()
        {
            return this -> iCount;
        }
};

int main()
{
    SinglyCLLL *obj = new SinglyCLLL();

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


    return 0;
}