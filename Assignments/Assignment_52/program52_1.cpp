// write a generic program to multiply two numbers.

#include <iostream>
using namespace std;

template <class T>
T Multiply(T no1, T no2)
{
    T ans;
    ans = no1 * no2;

    return ans;

}

int main()
{
    int iRet = 0;

    iRet = Multiply(10,20);
    cout << "Multiplication of Integers is : "<< iRet << "\n";

    cout <<"Multiplication of floats is : "<< Multiply(10.0f,20.0f) << "\n";

    return 0;
}