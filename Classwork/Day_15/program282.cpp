#include <iostream>
using namespace std;

void Display()                                  // Function defination
{
    int iCnt = 0;                               // Local Variable

    for(iCnt = 1; iCnt <= 4; iCnt++)            // Business logic(for loop)
    {
        cout << "Jay Ganesh...." << endl;
    }
}

int main()                                      // Main method
{
    Display();                                  // Function call

    return 0;
}