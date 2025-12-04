#include <iostream>
using namespace std;

int Summation(int Arr[], int iSize)                 // Function defination
{
    int iCnt = 0;                                   // Local Variables
    int iSum = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)             // Business Logic
    {
        iSum += Arr[iCnt];
    }

    return iSum;
}

int main()                                          // Main method
{
    int iRet = 0;                                   // Local Variables

    int Brr[] = {10,20,30,40,50};                   // Array declaration, Initialization

    iRet = Summation(Brr, 5);                       // Function call

    cout<< "Summation is : " << iRet << "\n";       // Display output

    return 0;
}