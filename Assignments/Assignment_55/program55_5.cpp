// Write a generic program to find maximum of four values.

#include <iostream>
using namespace std;

template <class T>
T Max(T no1, T no2, T no3, T no4)
{
    if((no1 > no2) && (no1 > no3) && (no1 > no4))
    {
        return no1;
    }
    else if((no2 > no1) && (no2 > no3) && (no2 > no4))
    {
        return no2;
    }
    else if((no3 > no2) && (no3 > no1) && (no3 > no4))
    {
        return no3;
    }
    else
    {
        return no4;
    }
}

int main()
{
    int iValue1 = 10, iValue2 = 20, Value3 = 60, iValue4 = 15;
    float fValue1 = 10.7f, fValue2 = 20.3f, fValue3 = 15.6f, fValue4 = 90.8f;
    int iRet = 0;
    float fRet = 0.0f;

    iRet = Max(iValue1, iValue2, Value3, iValue4);
    
    cout << "Maximum : "<< iRet << "\n";

    fRet = Max(fValue1, fValue2, fValue3, fValue4);

    cout << "Maximum : "<< fRet << "\n";

    return 0;
}