
#include <iostream>
using namespace std;

template <class T>
T Summation(T Arr[], int iSize)                     // Function defination
{
    int iCnt = 0;                                   // Local Variables
    T iSum; // uninitialized(produce unpredictable results)

    for(iCnt = 0; iCnt < iSize; iCnt++)             // Business Logic
    {
        iSum += Arr[iCnt];
    }

    return iSum;
}

int main()                                          // Main method
{
    float iRet = 0.0f;                              // Local Variables

    float Brr[] = {10.1f,20.2f,30.3f,40.4f,50.5f};  // Array declaration, Initialization

    iRet = Summation(Brr, 5);                       // Function call

    cout<< "Summation is : " << iRet << "\n";       // Display output

    return 0;
}