// write a generic program to search a value in an array.

#include <iostream>
using namespace std;

template <class T>
bool Search(T *arr, int iSize, T value)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < 5; iCnt++)
    {
        if(arr[iCnt] == value)
        {
            return true;
        }
    }

    return false;
}

int main()
{
    int iCnt = 0;
    bool bRet = false;

    int arr[] = {10,20,30,40,50};

    bRet = Search(arr, 5, 60);
    
    if(bRet)
    {
        cout << "Element is present.\n";
    }
    else
    {
        cout << "Element is absent.\n";
    }

    return 0;
}