#include <iostream>
using namespace std;

double Addition(double No1, double No2)                     // Function Defination
{
    double Ans;                                             // Local Variable

    Ans = No1 + No2;                                        // Business Logic
    
    return Ans;
}

int main()                                                  // Main method
{
    float i = 0.0f, j = 0.0f;                               // Local Variables
    float Ret = 0.0f;

    cout << "Enter first Number : "<< "\n";                 // Accept input
    cin >> i;

    cout << "Enter second Number : "<< "\n";                // Accept input
    cin >> j;

    Ret = Addition(i,j);                                    // Function call

    cout << "Addition is : "<< Ret << "\n";                 // Display Output(will add float values)

    return 0;
}