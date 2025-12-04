#include <iostream>
using namespace std;

void Display()                                  // Function defnation
{
    int iCnt = 0;   // auto storage class       // Local Variable

    cout << "Jay Ganesh...." << iCnt << "\n";   // Logic
    iCnt++;

    Display();                                  // Recursive call
}

int main()                                      // Main method
{
    Display();                                  // Function call(Infinite Iteration)

    return 0;
}