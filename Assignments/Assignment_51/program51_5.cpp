// Write a generic program to accept N values and reverse the contents

/*
    Input   :   10  20  30  10  30  40  10  40  10
    
    Output  :   10  40  10  40  30  10  30  20  10
*/

#include<iostream>
using namespace std;

template <class T>
void Reverse(T *arr, int iSize)
{
    int iCnt = 0;
    T *start = NULL;
    T *end = NULL;
    T temp = 0;

    start = arr;
    end = arr;

    while(*end != arr[iSize - 1])
    {
        end++;
    }

    while(start < end)
    {
        temp = *start;
        *start = *end;
        *end = temp;

        *start++;
        *end--;
    }
}

int main()
{
    int iRet = 0;

    int arr[] = {10,20,30,10,30,40,10,40,10};
    
    Reverse(arr,9);

    for(int iCnt = 0; iCnt < 9; iCnt++)
    {
        cout << arr[iCnt] << "\t";
    }

    return 0;
}