#include <iostream>
using namespace std;

template <class T>                                          // Template defiantion
T Addition(T No1, T No2)                                    // Function Defination
{
    T Ans;                                                  // Local Variable

    Ans = No1 + No2;                                        // Business Logic

    return Ans;
}

int main()                                                  // Main Method
{
    float i = 0.0f, j = 0.0f;                               // Local Variables
    float Ret = 0.0f;

    cout << "Enter first Number : "<< "\n";                 // Accept Input
    cin >> i;

    cout << "Enter second Number : "<< "\n";                // Accept Input
    cin >> j;

    Ret = Addition(i,j);                                    // Function call

    cout << "Addition is : "<< Ret << "\n";                 // Display Output

    return 0;
}