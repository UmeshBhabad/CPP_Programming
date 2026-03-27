// Use of this -> 

#include <iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node *PNODE;

class SinglyLL
{
    private:                                                // Set members to Private to achieve abstraction
        PNODE first;
        int iCount;
    
    public:
        SinglyLL()
        {
            cout << "Object of SinglyLL gets created.\n";
            this -> first = NULL;
            this -> iCount = 0;
        }

        void InsertFirst(int iNo)   // Updated
        {
            PNODE newn = NULL;

            newn = new NODE;

            newn -> data = iNo;
            newn -> next = NULL;

            newn -> next = this -> first;
            this -> first = newn;

            this -> iCount++;
        }

        void InsertLast(int iNo)
        {
            PNODE newn = NULL;
            PNODE temp = NULL;

            newn = new NODE;

            newn -> data = iNo;
            newn -> next = NULL;

            if(this -> iCount == 0)     // Updated
            {
                this -> first = newn;
            }
            else
            {
                temp = this -> first;

                while(temp -> next != NULL) // type 2
                {
                    temp = temp -> next;
                }

                temp -> next = newn;
            }

            this -> iCount++;
        }

        void DeleteFirst()
        {
            PNODE temp = NULL;

            if(this -> first == NULL)
            {
                return;
            }
            else if((this -> first) -> next == NULL)  // this -> iCount == 1
            {
                delete(this -> first);
                this -> first = NULL;
            }
            else
            {
                temp = this -> first;

                (this -> first) = (this -> first) -> next;
                delete(temp);
            }

            this -> iCount--;
        }

        void DeleteLast()
        {
            PNODE temp = NULL;

            if(this -> first == NULL)
            {
                return;
            }
            else if(this -> first -> next == NULL)  // this -> iCount == 1
            {
                delete(this -> first);
                this -> first = NULL;
            }
            else
            {
                temp = this -> first;

                while((temp -> next)-> next != NULL)
                {
                    temp = temp -> next;
                }

                delete(temp -> next);
                temp -> next = NULL;
            }

            this -> iCount--;
        }

        void Display()
        {
            PNODE temp = NULL;
            int iCnt = 0;
            temp = this -> first;

            for(iCnt = 1; iCnt <= this -> iCount; iCnt++)   // Updated : Using for loop
            {
                cout << "| "<< temp -> data <<"| ->";
                temp = temp -> next;
            }
            cout<< "NULL"<< "\n";
        }

        int Count()
        {
            return (this -> iCount);
        }

        void InsertAtPos(int iNo, int pos)
        {
            PNODE temp = NULL;
            PNODE newn = NULL;

            int iCnt = 0;
            
            if(pos < 1 || pos > (this -> iCount) + 1)
            {
                cout << "Invalid Position" << "\n";
                return;
            }

            if(pos == 1)
            {
                this -> InsertFirst(iNo);
            }
            else if(pos == (this -> iCount) + 1)
            {
                this -> InsertLast(iNo);
            }
            else
            {            
                newn = new NODE;

                newn -> data = iNo;
                newn -> next = NULL;

                temp = this -> first;

                for(iCnt = 1; iCnt < pos - 1; iCnt++)
                {
                    temp = temp -> next;
                }

                newn -> next = temp -> next;
                temp -> next = newn;

                this -> iCount++;
            }
        }

        void DeleteAtPos(int pos)
        {
            PNODE temp = NULL;
            PNODE target = NULL;

            int iCnt = 0;
            
            if(pos < 1 || pos > (this -> iCount))
            {
                cout << "Invalid Position" << "\n";
                return;
            }

            if(pos == 1)
            {
                this -> DeleteFirst();
            }
            else if(pos == (this -> iCount))
            {
                this -> DeleteLast();
            }
            else
            {
                temp = this -> first;

                for(iCnt = 1; iCnt < pos - 1; iCnt++)
                {
                    temp = temp -> next;
                }
                
                target = temp -> next;

                temp -> next = target -> next;

                delete(target);

                this -> iCount--;
            }
        }
};

int main()
{
    SinglyLL obj;
    int iRet = 0;

    obj.InsertFirst(51);
    obj.InsertFirst(21);
    obj.InsertFirst(11);

    obj.Display();
    iRet = obj.Count();

    cout << "Number of nodes are : " << iRet << "\n";

    obj.InsertLast(101);
    obj.InsertLast(111);
    obj.InsertLast(121);

    obj.Display();
    iRet = obj.Count();

    cout << "Number of nodes are : " << iRet << "\n";

    obj.DeleteFirst();

    obj.Display();
    iRet = obj.Count();

    obj.first = NULL;    // Error
    obj.iCount = 0;

    cout << "Number of nodes are : " << iRet << "\n";

    obj.DeleteLast();

    obj.Display();
    iRet = obj.Count();

    cout << "Number of nodes are : " << iRet << "\n";

    obj.InsertAtPos(105, 4);

    obj.Display();
    iRet = obj.Count();

    cout << "Number of nodes are : " << iRet << "\n";

    obj.DeleteAtPos(4);

    obj.Display();
    iRet = obj.Count();

    cout << "Number of nodes are : " << iRet << "\n";

    return 0;
}