// write a generic program to check if array is sorted.

#include <iostream>
using namespace std;

template <class T>
bool CheckSorted(T *src, int iSize)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < 5; iCnt++)
    {
        if(src[iCnt] > src[iCnt + 1])
        {
            return false;
        }
    }

    return true;
}

int main()
{
    int iCnt = 0;
    bool bRet = false;

    int arr[] = {10,20,30,40,50,7};
    
    bRet = CheckSorted(arr,5);

    if(bRet)
    {
        cout << "Array is sorted.\n";
    }
    else
    {
        cout << "Array is not sorted.\n";
    }

    return 0;
}