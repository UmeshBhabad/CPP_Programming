
#include <iostream>
using namespace std;

template <class T>                                          // Template Instantiation
T Maximum(T No1, T No2)                                     // Function defination
{
    if(No1 > No2)                                           // Business Logic
    {
        return No1;
    }
    else
    {
        return No2;
    }
}

int main()                                                  // Main method
{
    double dValue1 = 10.0, dValue2 = 11.0, dRet = 0.0;      // Local Variables

    dRet = Maximum(dValue1, dValue2);                       // Function call
    cout << "Maximum : " << dRet << "\n";                   // Display Output

    return 0;
}