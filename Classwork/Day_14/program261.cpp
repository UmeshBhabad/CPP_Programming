
#include <iostream>
using namespace std;

int Add(int No1, int No2)
{
    int Ans;

    Ans = No1 + No2;

    return Ans;
}

int main()
{
    int iValue1 = 10;
    int iValue2 = 11;
    int iRet = 0;

    iRet = Add(iValue1, iValue2);

    cout << iRet << endl;

    return 0;
}