// write a generic program to accept N values from user and replace all occurance of a value.

#include <iostream>
using namespace std;

template <class T>
void Replace(T arr[], int iSize, T oldVal, T newVal)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(arr[iCnt] == oldVal)
        {
            arr[iCnt] = newVal;
        }
    }
}

int main()
{
    int iCnt = 0;

    int arr[] = {10,20,30,40,50};

    float brr[] = {10.0f,3.7f,9.8f,8.7f};

    cout << "Before replacing : \n";

    for(iCnt = 0; iCnt < 5; iCnt++)
    {
        cout << arr[iCnt] << "\t";
    }
    cout << "\n";

    Replace(arr, 5, 30, 35);

    cout << "After replacing : \n";

    for(iCnt = 0; iCnt < 5; iCnt++)
    {
        cout << arr[iCnt] << "\t";
    }
    cout << "\n";

    cout << "Before replacing : \n";
    for(iCnt = 0; iCnt < 4; iCnt++)
    {
        cout << brr[iCnt] << "\t";
    }
    cout << "\n";

    Replace(brr, 4, 3.7f, 4.2f);

    cout << "After replacing : \n";
    for(iCnt = 0; iCnt < 4; iCnt++)
    {
        cout << brr[iCnt] << "\t";
    }

    return 0;
}