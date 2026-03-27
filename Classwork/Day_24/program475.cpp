#include <iostream>
using namespace std;

// Logic class
class ArrayX
{
    // Members declaration
    public:
        int *Arr;                                       // pointer to array
        int iSize;                                      // array size

        ArrayX(int);                                    // parameterized constructor
        ~ArrayX();                                      // destructor
        
        // class methods
        void Accept();
        void Display();
        int Addition();
};

ArrayX :: ArrayX(int no)      // Constructor
{
    cout << "Inside Constructor\n";

    // members initialization
    iSize = no;                                         // initialize size
    Arr = new int[iSize];                               // initialize array, memory allocation
}

ArrayX :: ~ArrayX()       // Destructor
{
    cout << "Inside Destructor\n";
    delete [] Arr;                                      // deallocate memory
}

void ArrayX :: Accept()                                 // function defination
{
    int iCnt = 0;                                       // local variable

    cout << "Enter the Elements : \n";
    
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        cin >> Arr[iCnt];                               // accept array element
    }
}

void ArrayX :: Display()                                // Function defination
{
    int iCnt = 0;                                       // local variable

    cout<< "Elements of the array are : \n";

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        cout << Arr[iCnt] << "\t";                      // Display element
    }
    cout << "\n";
}

int ArrayX :: Addition()                                // Function defination
{
    int iSum = 0;                                       // Local Variables
    int iCnt = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        iSum += Arr[iCnt];                              // logic
    }

    return iSum;
}

// main method
int main()
{
    int iValue = 0;

    cout << "Enter the Number of elements : \n";
    cin >> iValue;
    
    // Step 1: Allocate the memory
    ArrayX *aobj = new ArrayX(iValue);  // Dynamic

    // Step 2: Use the Memory
    
    aobj -> Accept();
    aobj -> Display();

    cout << "Summation of all elements : "<< aobj -> Addition() << "\n";

    // Step 3: Deallocate the memory
    delete aobj;

    return 0;
}