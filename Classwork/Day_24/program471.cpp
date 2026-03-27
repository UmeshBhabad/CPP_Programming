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

    ArrayX *aobj = new ArrayX(10);                          // Dynamic Object Instantiation

    return 0;
}