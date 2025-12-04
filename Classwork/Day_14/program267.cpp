
#include <iostream>
using namespace std;

template <class T>                                          // Template Instantiation
T Maximum(T No1, T No2, T No3)                              // Function defination
{
    if(No1 >= No2 && No1 >= No3)                            // Business Logic
    {
        return No1;
    }
    else if(No2 >= No1 && No2 >= No3)
    {
        return No2;
    }
    else
    {
        return No3;
    }
}

int main()                                                  // Main method
{
    double dValue1 = 10.0, dValue2 = 11.0;                  // Local Variables
    double dValue3 = 20.0, dRet = 0.0;      

    dRet = Maximum(dValue1, dValue2, dValue3);              // Function call
    cout << "Maximum : " << dRet << "\n";                   // Display Output

    return 0;
}