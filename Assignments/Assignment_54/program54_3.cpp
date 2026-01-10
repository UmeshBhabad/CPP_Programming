// write a generic program to find sum of all Odd elements.

#include <iostream>
using namespace std;

template <class T>
T SumOdd(T *arr, int iSize)
{
    int iCnt = 0;
    T sum = 0;

    for(iCnt = 0; iCnt < 5; iCnt++)
    {
        if(arr[iCnt] % 2 == 1)
        {
            sum += arr[iCnt];
        }
    }

    return sum;
}

int main()
{
    int iCnt = 0;
    int iRet = 0;

    int arr[] = {11,22,54,101,104};

    iRet = SumOdd(arr, 5);

    cout << "Summation of Odd elements is : "<< iRet << "\n";  // 180

    return 0;
}