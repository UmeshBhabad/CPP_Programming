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

        void InsertAtPos(int iNo, int pos)                          // Function Defination
        {
            PNODE temp = NULL;                                      // Pointer to node
            PNODE newn = NULL;

            int iCnt = 0;                                           // Local Variable
            
            if(pos < 1 || pos > iCount + 1)                         // Filter
            {
                cout << "Invalid Position" << "\n";
                return;
            }

            // Business Logic
            if(pos == 1)                                            // First position
            {
                InsertFirst(iNo);
            }
            else if(pos == iCount + 1)                              // Last position
            {
                InsertLast(iNo);
            }
            else    // Between first and last position
            {            
                newn = new NODE;                                    // Memory allocation

                newn -> data = iNo;                                 // Assigning Values
                newn -> next = NULL;

                temp = first;                                       // Xerox Copy

                for(iCnt = 1; iCnt < pos - 1; iCnt++)               // Traversal
                {
                    temp = temp -> next;
                }

                newn -> next = temp -> next;
                temp -> next = newn;

                iCount++;                                           // Increase count after Insertion
            }
        }

        void DeleteAtPos(int pos)                                   // Function defination
        {
            PNODE temp = NULL;                                      // Pointer to node
            PNODE target = NULL;

            int iCnt = 0;                                           // Local Variable
            
            if(pos < 1 || pos > iCount)                             // Filter 
            {
                cout << "Invalid Position" << "\n";
                return;
            }

            if(pos == 1)                                            // First Position
            {
                DeleteFirst();
            }
            else if(pos == iCount)                                  // Last position
            {
                DeleteLast();
            }
            else    // between first and last position
            {
                temp = first;                                       // Xerox

                for(iCnt = 1; iCnt < pos - 1; iCnt++)               // Traversal
                {
                    temp = temp -> next;
                }
                
                target = temp -> next;

                temp -> next = target -> next;

                delete(target);

                iCount--;                                           // Decrease count after deletion
            }
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

    obj.InsertAtPos(105, 4);                                        // Function call

    obj.Display();                                                  // Display Function call
    iRet = obj.Count();                                             // Count Function call

    cout << "Number of nodes are : " << iRet << "\n";               // Display Count

    obj.DeleteAtPos(4);                                             // Function call

    obj.Display();                                                  // Display Function call
    iRet = obj.Count();                                             // Count Function call

    cout << "Number of nodes are : " << iRet << "\n";               // Display Count

    return 0;
}