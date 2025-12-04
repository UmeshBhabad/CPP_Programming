#include <iostream>
using namespace std;

template <class T>
T Maximum(T Arr[], int iSize)                       // Function defination
{
    int iCnt = 0;                                   // Local Variables
    T iMax;

    iMax = Arr[0];
    for(iCnt = 0; iCnt < iSize; iCnt++)             // Business Logic
    {
        if(Arr[iCnt] > iMax)
        {
            iMax = Arr[iCnt];
        }
    }

    return iMax;
}

int main()                                          // Main method
{
    float iRet = 0.0f;                              // Local Variables

    float Brr[] = {10.1f,20.2f,30.3f,40.4f,50.5f};  // Array declaration, Initialization

    iRet = Maximum(Brr, 5);                         // Function call

    cout<< "Maximum is : " << iRet << "\n";         // Display output

    return 0;
}