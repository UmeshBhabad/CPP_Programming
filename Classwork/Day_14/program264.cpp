
#include <iostream>
using namespace std;

int Maximum(int No1, int No2)
{
    if(No1 > No2)
    {
        return No1;
    }
    else
    {
        return No2;
    }
}

int main()                              // Main method
{
    int iValue1 = 10, iValue2 = 11, iRet = 0;     // Local Variables

    iRet = Maximum(iValue1, iValue2);       // Function call
    cout << "Maximum : " << iRet << "\n";// Display Output

    return 0;
}