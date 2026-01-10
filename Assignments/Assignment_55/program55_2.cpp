// Write a generic program to perform substraction of two numbers

#include <iostream>
using namespace std;

template <class T>
T Substraction(T no1, T no2)
{
    T ans;

    ans = no1 - no2;

    return ans;

}

int main()
{
    int iRet = 0;
    float fRet = 0.0f;

    iRet = Substraction(10,20);
    cout << "Substraction of Integers is : "<< iRet << "\n";

    fRet = Substraction(10.5f,20.3f);
    cout <<"Substraction of floats is : "<< fRet << "\n";

    return 0;
}