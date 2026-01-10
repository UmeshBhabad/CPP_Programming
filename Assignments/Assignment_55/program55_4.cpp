// Write a generic program to swap two numbers

#include <iostream>
using namespace std;

template <class T>
void Swap(T &no1, T &no2)
{
    T temp;

    temp = no1;

    no1 = no2;

    no2 = temp;
}

int main()
{
    int iValue1 = 10, iValue2 = 20;
    float fValue1 = 10.7f, fValue2 = 20.3f;

    cout << "Before Swapping : "<< iValue1 << "\t" << iValue2 << "\n";

    Swap(iValue1, iValue2);
    
    cout << "After Swapping : "<< iValue1 << "\t" << iValue2  << "\n";

    cout << "Before Swapping : "<< fValue1 << "\t" << fValue2  << "\n";
    
    Swap(fValue1, fValue2);
    
    cout <<"After Swapping : "<< fValue1 << "\t" << fValue2  << "\n";

    return 0;
}