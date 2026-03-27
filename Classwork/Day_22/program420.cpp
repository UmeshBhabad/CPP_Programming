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

};

int main()                                                              // Main Method
{
    SinglyLL obj1;                                                      // Objects Instantiation
    SinglyLL obj2;


    return 0;
}