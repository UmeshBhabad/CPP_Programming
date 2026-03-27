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

        void Accept()                                       // Function Defination
        {
            int iCnt = 0;                                   // Local Variable

            cout << "Enter the Elements : \n";
            
            for(iCnt = 0; iCnt < iSize; iCnt++)             // Logic
            {
                cin >> Arr[iCnt];
            }
        }

        void Display()                                      // Function Defination
        {
            int iCnt = 0;                                   // Local Variable

            cout<< "Elements of the array are : \n";

            for(iCnt = 0; iCnt < iSize; iCnt++)             // Logic
            {
                cout << Arr[iCnt] << "\t";
            }
            cout << "\n";
        }

        int Addition()                                      // Function Defination
        {
            int iSum = 0;                                   // Local Variables
            int iCnt = 0;

            for(iCnt = 0; iCnt < iSize; iCnt++)             
            {
                iSum += Arr[iCnt];                          // Business Logic
            }

            return iSum;
        }
};

int main()                                                  // Main Method
{
    int iValue = 0;                                         // Local Variable

    cout << "Enter the Number of elements : \n";            // Accept Array Length
    cin >> iValue;
    
    // Step 1: Allocate the memory
    ArrayX *aobj = new ArrayX(iValue);                      // Dynamic Object Instantiation

    // Step 2: Use the Memory
    
    aobj -> Accept();                                       // Function Call

    aobj -> Display();                                      // Function Call

    cout << "Summation of all elements : "<< aobj -> Addition() << "\n";    // Display Output

    // Step 3: Deallocate the memory
    delete aobj;                                            // Deallocate Memory

    return 0;
}