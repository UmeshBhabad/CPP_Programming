// write a generic program to copy one array into another.

#include <iostream>
using namespace std;

template <class T>
void CopyArray(T *src, T *dest, int iSize)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < 5; iCnt++)
    {
        dest[iCnt] = src[iCnt];
    }
}

int main()
{
    int iCnt = 0;

    int arr[] = {10,20,30,40,50};
    int brr[5] = {0};

    CopyArray(arr,brr,5);
    
    for(iCnt = 0; iCnt < 5; iCnt++)
    {
        cout << brr[iCnt] << "\t";
    }

    return 0;
}