#include <iostream>
using namespace std;

void Display()                                  // Function defination
{
    static int iCnt = 0;   // static storage class(preserves the value in the variable inside the function)

    cout << "Jay Ganesh...." << iCnt << "\n";   // Logic
    iCnt++;

    Display();                                  // Recursive Call(Infinite Iteration)
}

int main()                                      // Main method
{
    Display();                                  // Function call

    return 0;
}