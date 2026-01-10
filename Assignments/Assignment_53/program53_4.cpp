// write a generic program to accept N values from user and return second largest value.

#include <iostream>
using namespace std;

template <class T>
T SecondMin(T arr[], int iSize)
{
    T Min = 0;
    T SecMin = 0;
    int i = 0;

    Min = arr[0];
    SecMin = arr[0];
    for(i = 0; i < iSize; i++)
    {
        if(arr[i] < Min)
        {
            SecMin = Min;
            Min = arr[i];
        }
        else if(arr[i] < SecMin)
        {
            SecMin = arr[i];
        }
    }

    return SecMin;
}

int main()
{
    int iRet = 0, fRet = 0.0f;

    int arr[] = {10,20,30,40,50};

    float brr[] = {10.0f,3.7f,9.8f,8.7f};

    iRet = SecondMin(arr, 5);
    cout << "Second Minimum of Integers is : "<< iRet << "\n";

    fRet = SecondMin(brr, 4);

    cout << "Second Minimum of float is : "<< fRet << "\n";

    return 0;
}