// Write a generic program to accept N values and search last occurrance of any specific values

/*
    Input   :   10  20  30  10  30  40  10  40  10
    value to check frequency    :   40
    Output  :   7
*/

#include<iostream>
using namespace std;

template <class T>
int SearchLast(T *arr, int iSize, T No)
{
    int iCnt = 0;
    int Index = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(arr[iCnt] == No)
        {
           Index = iCnt;
        }
    }

    return Index;
}

int main()
{
    int iRet = 0;

    int arr[] = {10,20,30,10,30,40,10,40,10};
    
    iRet = SearchLast(arr,9,40);

    cout << iRet << "\n";

    return 0;
}