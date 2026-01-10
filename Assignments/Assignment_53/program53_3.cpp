// write a generic program to accept N values from user and return second largest value.

#include <iostream>
using namespace std;

template <class T>
T SecondMax(T arr[], int iSize)
{
    T Max = 0;
    T SecMax = 0;
    int i = 0;

    Max = arr[0];
    SecMax = arr[0];
    for(i = 0; i < iSize; i++)
    {
        if(arr[i] > Max)
        {
            SecMax = Max;
            Max = arr[i];
        }
        else if(arr[i] > SecMax)
        {
            SecMax = arr[i];
        }
    }

    return SecMax;
}

int main()
{
    int iRet = 0, fRet = 0.0f;

    int arr[] = {10,20,30,40,50};

    float brr[] = {10.0f,3.7f,9.8f,8.7f};

    iRet = SecondMax(arr, 5);
    cout << "Second Largest of Integers is : "<< iRet << "\n";

    fRet = SecondMax(brr, 4);

    cout << "Second Largest of float is : "<< fRet << "\n";

    return 0;
}