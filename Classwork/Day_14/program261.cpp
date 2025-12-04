#include <iostream>
using namespace std;

int Add(int No1, int No2)               // Function defination
{
    int Ans;                            // Local Variable

    Ans = No1 + No2;                    // Business Logic

    return Ans;
}

int main()                              // Main method
{
    int iValue1 = 10;                   // Local Variables
    int iValue2 = 11;
    int iRet = 0;

    iRet = Add(iValue1, iValue2);       // Function call

    cout << iRet << endl;               // Display result

    return 0;
}