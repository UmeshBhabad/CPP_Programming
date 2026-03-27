#include <iostream>
using namespace std;

struct node                                                         // Structure Defination
{
    int data;
    struct node *next;
};

typedef struct node NODE;                                           // Aliasing Structure Data type
typedef struct node *PNODE;
typedef struct node **PPNODE;

// Logic class
class SinglyLL
{
    public:
        PNODE first;                                                // Class Members declaration
        int iCount;
    
        SinglyLL()                                                  // Default Constructor
        {
            cout << "Object of SinglyLL gets created.\n";
            first = NULL;                                           // Initializing Members
            iCount = 0;
        }

        void InsertFirst(int iNo)                                   // Function defination
        {
            PNODE newn = NULL;                                      // Pointer to node

            newn = new NODE;                                        // Memory allocation

            newn -> data = iNo;                                     // Assigning Values
            newn -> next = NULL;

            // Business Logic
            if(first == NULL)   // LL is empty
            {
                first = newn;
            }
            else    // LL contains 1 or more nodes
            {
                newn -> next = first;
                first = newn;
            }

            iCount++;                                               // Increase Count after Inserting node
        }

        void InsertLast(int iNo)                                    // Function Defination
        {
            PNODE newn = NULL;                                      // pointer to node
            PNODE temp = NULL;

            newn = new NODE;                                        // Memory Allocation

            newn -> data = iNo;                                     // Assigning Values
            newn -> next = NULL;

            // Business Logic
            if(first == NULL)   // LL is empty
            {
                first = newn;
            }
            else    // LL contains 1 or more nodes
            {
                temp = first;

                while(temp -> next != NULL) // type 2
                {
                    temp = temp -> next;
                }

                temp -> next = newn;
            }

            iCount++;                                               // Increase Count after Inserting node
        }

        void InsertAtPos(int iNo, int pos)                          // Function Defination
        {}

        void DeleteFirst()                                          // Function Defination
        {}

        void DeleteLast()                                           // Function Defination
        {}

        void DeleteAtPos(int pos)                                   // Function Defination
        {}

        void Display()                                              // Function Defination
        {
            PNODE temp = NULL;                                      // pointer to node

            temp = first;                                           // Xerox Copy

            // Business Logic
            while(temp != NULL)
            {
                cout << "| "<< temp -> data <<"| ->";
                temp = temp -> next;
            }
            cout<< "NULL"<< "\n";
        }

        int Count()                                                 // Function Defination
        {
            return iCount;
        }
};

int main()                                                          // Main Method
{
    SinglyLL obj;                                                   // Object Instantiation
    int iRet = 0;                                                   // Local Variable

    obj.InsertFirst(51);                                            // Function call
    obj.InsertFirst(21);
    obj.InsertFirst(11);

    obj.Display();                                                  // Display Function call
    iRet = obj.Count();                                             // Count Function call

    cout << "Number of nodes are : " << iRet << "\n";               // Display Count

    obj.InsertLast(101);                                            // Function call
    obj.InsertLast(111);
    obj.InsertLast(121);

    obj.Display();                                                  // Display Function call
    iRet = obj.Count();                                             // Count Function call

    cout << "Number of nodes are : " << iRet << "\n";               // Display Count

    return 0;
}