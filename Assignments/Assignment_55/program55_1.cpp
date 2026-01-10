// Write a generic program to perform addition of two numbers

#include <iostream>
using namespace std;

template <class T>
T Addition(T no1, T no2)
{
    T ans = 0;
    
    ans = no1 + no2;

    return ans;

}

int main()
{
    int iRet = 0;
    float fRet = 0.0f;

    iRet = Addition(10,20);
    cout << "Addition of Integers is : "<< iRet << "\n";

    fRet = Addition(10.0f,20.0f);
    cout <<"Addition of floats is : "<< fRet << "\n";

    return 0;
}