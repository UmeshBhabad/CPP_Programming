#include <iostream>
using namespace std;

class ArrayX
{
    public:
        int *Arr;
        int iSize;

        ArrayX(int);
        ~ArrayX();
        void Accept();
        void Display();
        int Addition();
        int Maximum();
};

ArrayX :: ArrayX(int no)      // Constructor
{
    cout << "Inside Constructor\n";
    iSize = no;
    Arr = new int[iSize];
}

ArrayX :: ~ArrayX()       // Destructor
{
    cout << "Inside Destructor\n";
    delete [] Arr;
}

void ArrayX :: Accept()
{
    int iCnt = 0;

    cout << "Enter the Elements : \n";
    
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        cin >> Arr[iCnt];
    }
}

void ArrayX :: Display()
{
    int iCnt = 0;

    cout<< "Elements of the array are : \n";

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        cout << Arr[iCnt] << "\t";
    }
    cout << "\n";
}

int ArrayX :: Addition()
{
    int iSum = 0;
    int iCnt = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        iSum += Arr[iCnt];
    }

    return iSum;
}

int ArrayX :: Maximum()
{
    int iMax = 0;
    int iCnt = 0;

    iMax = Arr[0];

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] > iMax)
        {
            iMax = Arr[iCnt];
        }
    }

    return iMax;
}

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
    cout << "Maximum element is : "<< aobj -> Maximum()<< "\n";

    // Step 3: Deallocate the memory
    delete aobj;

    return 0;
}