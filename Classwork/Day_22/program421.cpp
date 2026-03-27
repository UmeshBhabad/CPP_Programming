#include <iostream>
using namespace std;

struct node                                                             // Structure Defination
{
    int data;
    struct node *next;
};

typedef struct node NODE;                                               // Aliasing structure Data types
typedef struct node *PNODE;
typedef struct node **PPNODE;

// Logic class
class SinglyLL
{
    public:                                                             // Member Variables Declaration
        PNODE first;
        int iCount;
    
    SinglyLL()                                                          // Constructor
    {
        cout << "Object of SinglyLL gets created.\n";
        first = NULL;                                                   // Assigning Variables
        iCount = 0;
    }

    void InsertFirst(int iNo)                                           // Function Defination
    {}

    void InsertLast(int iNo)                                            // Function Defination
    {}

    void InsertAtPos(int iNo, int pos)                                  // Function Defination
    {}

    void DeleteFirst()                                                  // Function Defination
    {}

    void DeleteLast()                                                   // Function Defination
    {}

    void DeleteAtPos(int pos)                                           // Function Defination
    {}

    void Display()                                                      // Function Defination
    {}

    int Count()                                                         // Function Defination
    {
        return iCount;
    }
};

int main()                                                              // Main Method
{
    SinglyLL obj;                                                       // Object Instantiation
    
    int iRet = 0;                                                       // Local Variable

    obj.InsertFirst(51);                                                // Function call to InsertFirst
    obj.InsertFirst(21);
    obj.InsertFirst(11);

    obj.Display();                                                      // Display Function call
    iRet = obj.Count();                                                 // Count Function call

    cout << "Number of nodes are : " << iRet << "\n";                   // Display Count

    return 0;
}