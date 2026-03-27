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


        void InsertFirst(int iNo)   // Updated
        {
            PNODE newn = NULL;                                      // Pointer to node

            newn = new NODE;                                        // Memory allocation

            newn -> data = iNo;                                     // Assiging Values
            newn -> next = NULL;

            // Business Logic
            newn -> next = first;
            first = newn;

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
            if(iCount == 1)   // LL is empty
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
        {
            PNODE temp = NULL;                                      // Pointer to node

            // Business Logic
            if(first == NULL)   // LL is empty
            {
                return;                                             // No node to delete
            }
            else if(first -> next == NULL)  // LL contains 1 node   // iCount == 1
            {
                delete first;                                       // Deallocate the memory
                first = NULL;                                       // set head to null
            }
            else    // LL contains more than 1 node
            {
                temp = first;                                       // Xerox

                first = first -> next;
                delete temp;                                        // Deallocate the memory
            }

            iCount--;                                               // Decrease count after deleting
        }

        void DeleteLast()                                           // Function Defination
        {
            PNODE temp = NULL;                                      // Pointer to node

            // Business Logic
            if(first == NULL)   // LL is empty
            {
                return;                                             // No node to delete
            }
            else if(first -> next == NULL)  // LL contains 1 node   // iCount == 1
            {
                delete first;                                       // Deallocate the memory
                first = NULL;                                       // set head to null
            }
            else    // LL contains more than 1 node
            {
                temp = first;                                       // Xerox

                while((temp -> next)-> next != NULL)                // Traversal
                {
                    temp = temp -> next;
                }

                delete temp -> next;                                // Deallocate the memory
                temp -> next = NULL;
            }

            iCount--;                                               // Decrease count after deletion
        }

        void DeleteAtPos(int pos)                                   // Function defination
        {}

        void Display()                                              // Function Defination
        {
            PNODE temp = NULL;                                      // Pointer to node

            int iCnt = 0;                                           // Local Variable

            temp = first;                                           // Xerox copy

            for(iCnt = 1; iCnt <= iCount; iCnt++)   // Updated : Using for loop
            {
                cout << "| "<< temp -> data <<"| ->";               // Business Logic
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

    obj.DeleteFirst();                                              // Function call

    obj.Display();                                                  // Display Function call
    iRet = obj.Count();                                             // Count Function call

    cout << "Number of nodes are : " << iRet << "\n";               // Display Count

    obj.DeleteLast();                                               // Function call

    obj.Display();                                                  // Display Function call
    iRet = obj.Count();                                             // Count Function call

    cout << "Number of nodes are : " << iRet << "\n";               // Display Count

    return 0;
}