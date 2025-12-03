
#include <iostream>
using namespace std;

template <class T>                      // Template Instantiation
T Add(T No1, T No2)                     // Function defination
{
    T Ans;

    Ans = No1 + No2;

    return Ans;
}

int main()                              // Main method
{
    int iValue1 = 10, iValue2 = 11, iRet = 0;     // Local Variables
    float  fValue1 = 10.0f, fValue2 = 11.0f, fRet = 0.0f;
    double dValue1 = 10.0, dValue2 = 11.0, dRet = 0.0;

    iRet = Add(iValue1, iValue2);       // Function call
    cout << "Addition of int : " << iRet << "\n";               // Display Output

    fRet = Add(fValue1, fValue2);       // Function call
    cout << "Addition of float : " << fRet << "\n";               // Display Output

    dRet = Add(dValue1, dValue2);       // Function call
    cout << "Addition of double : " << dRet << "\n";               // Display Output

    return 0;
}