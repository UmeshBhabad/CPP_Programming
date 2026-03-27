#include <iostream>
using namespace std;

int Addition(int No1, int No2)                                  // Function Defination
{
    int Ans;                                                    // Local Variable

    Ans = No1 + No2;                                            // Business Logic

    return Ans;
}

int main()                                                      // Main Method
{
    int i = 0, j = 0;                                           // Local Variables
    int Ret = 0;

    cout << "Enter first Number : "<< "\n";                     // Accept Values
    cin >> i;

    cout << "Enter second Number : "<< "\n";
    cin >> j;

    Ret = Addition(i,j);                                        // Function call

    cout << "Addition is : "<< Ret << "\n";                     // Display Output

    return 0;
}