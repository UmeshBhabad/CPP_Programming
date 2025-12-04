// Generic Programming

#include <iostream>
using namespace std;

template <class T>                      // Template Instantiation
T Add(T No1, T No2)                     // Function defination
{
    T Ans;                              // Local Variable

    Ans = No1 + No2;                    // Business Logic

    return Ans;
}

int main()                              // Main method
{
    int iValue1 = 10;                   // Local Variables
    int iValue2 = 11;
    int iRet = 0;

    iRet = Add(iValue1, iValue2);       // Function call

    cout << iRet << endl;               // Display Output

    return 0;
}