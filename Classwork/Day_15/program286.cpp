#include <iostream>
using namespace std;

void Display()                                  // Function call
{
    auto iCnt = 0;   // auto storage class      // Local Variable

    cout << "Jay Ganesh...." << iCnt << "\n";   // Logic
    iCnt++;

    Display();                                  // Recursive Call
}

int main()                                      // Main Method
{
    Display();                                  // Function call(Infinite Iteration)

    return 0;
}