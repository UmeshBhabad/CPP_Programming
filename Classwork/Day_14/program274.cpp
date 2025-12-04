#include <iostream>
using namespace std;

template <class T>
int CountFrequency(T Arr[], int iSize, T No)                // Function defination
{
    int iCnt = 0;                                           // Local Variables
    int iCount = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)                     // Business Logic
    {
        if(Arr[iCnt] == No)
        {
            iCount++;
        }
    }

    return iCount;
}

int main()                                                  // Main method
{
    int iRet = 0;                                           // Local Variables

    float Brr[] = {10.1f,20.2f,30.3f,40.4f,50.5f,20.2f};    // Array declaration, Initialization

    iRet = CountFrequency(Brr, 6, 20.2f);                   // Function call

    cout<< "Frequency is : " << iRet << "\n";               // Display output

    return 0;
}