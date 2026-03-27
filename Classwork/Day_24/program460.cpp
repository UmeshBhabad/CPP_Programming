#include <iostream>
using namespace std;

int Addition(int No1, int No2)                                      // Function Defination
{
    int Ans;                                                        // Local Variable

    Ans = No1 + No2;                                                // Business Logic

    return Ans;
}

int main()                                                          // Main method
{
    float i = 0.0f, j = 0.0f;                                       // Local Variables
    float Ret = 0.0f;

    cout << "Enter first Number : "<< "\n";                         // Accept input
    cin >> i;   // 90.3

    cout << "Enter second Number : "<< "\n";                        // Accept input
    cin >> j;   // 10.5

    Ret = Addition(i,j);                                            // Function call

    cout << "Addition is : "<< Ret << "\n"; // 100  // Data loss    // Display Output(addition of integers values only)

    return 0;
}