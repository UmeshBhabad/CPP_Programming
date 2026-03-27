#include <iostream>
using namespace std;

class ArrayX                                                // Logic Class
{
    public:
        int *Arr;                                           // Member Variables Declaration
        int iSize;

        ArrayX(int no)      // Constructor
        {
            cout << "Inside Constructor\n";                 
            iSize = no;                                     // Assigning Values
            Arr = new int[iSize];
        }

        ~ArrayX()       // Destructor
        {
            cout << "Inside Destructor\n";
            delete [] Arr;                                  // Deallocating Memory
        }
};

int main()
{
    // ArrayX aobj(10);                                     // Static Object Instantiation

    // Step 1: Allocate the memory
    ArrayX *aobj = new ArrayX(10);                          // Dynamic Object Instantiation

    // Step 2: Use the Memory
    // 

    // Step 3: Deallocate the memory
    delete aobj;                                            // Deallocate memory after use

    return 0;
}