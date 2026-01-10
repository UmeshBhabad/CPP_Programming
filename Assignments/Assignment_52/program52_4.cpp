// write a generic program to accept N values from user and return largest value.

#include <iostream>
using namespace std;

template <class T>
T MaxElement(T arr[], int iSize)
{
    T Max = 0;
    int i = 0;

    Max = arr[0];
    for(i = 0; i < iSize; i++)
    {
        if(arr[i] > Max)
        {
            Max = arr[i];
        }
    }

    return Max;
}

int main()
{
    int iRet = 0, fRet = 0.0f;

    int arr[] = {10,20,30,40,50};

    float brr[] = {10.0f,3.7f,9.8f,8.7f};

    iRet = MaxElement(arr, 5);
    cout << "Largest of Integers is : "<< iRet << "\n";

    fRet = MaxElement(brr, 4);

    cout << "Largest of float is : "<< fRet << "\n";

    return 0;
}