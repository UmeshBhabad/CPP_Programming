// write a generic program to accept N values from user and return smallest value.

#include <iostream>
using namespace std;

template <class T>
T MinElement(T arr[], int iSize)
{
    T Min = 0;
    int i = 0;

    Min = arr[0];
    for(i = 0; i < iSize; i++)
    {
        if(arr[i] < Min)
        {
            Min = arr[i];
        }
    }

    return Min;
}

int main()
{
    int iRet = 0, fRet = 0.0f;

    int arr[] = {10,20,30,40,50};

    float brr[] = {10.0f,3.7f,9.8f,8.7f};

    iRet = MinElement(arr, 5);
    cout << "Smallest of Integers is : "<< iRet << "\n";

    fRet = MinElement(brr, 4);

    cout << "Smallest of floats is : "<< fRet << "\n";

    return 0;
}