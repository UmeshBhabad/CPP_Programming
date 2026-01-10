// Write a generic program to perform Division of two numbers

#include <iostream>
using namespace std;

template <class T>
T Division(T no1, T no2)
{
    T ans = 0;
    
    ans = no1 / no2;

    return ans;

}

int main()
{
    int iRet = 0;
    float fRet = 0.0f;

    iRet = Division(100,20);
    cout << "Division of Integers is : "<< iRet << "\n";

    fRet = Division(100.5f,25.5f);
    cout <<"Division of floats is : "<< fRet << "\n";

    return 0;
}