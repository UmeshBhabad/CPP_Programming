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
    double i = 0.0, j = 0.0;                                // Local Variables
    double Ret = 0.0;

    cout << "Enter first Number : "<< "\n";                 // Accept input
    cin >> i;

    cout << "Enter second Number : "<< "\n";                // Accept input
    cin >> j;

    Ret = Addition(i,j);                                    // Function call

    cout << "Addition is : "<< Ret << "\n";                 // Display Output

    return 0;
}