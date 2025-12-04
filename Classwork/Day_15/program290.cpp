#include <iostream>
using namespace std;

void Display()                              // Function defination
{
    static int iCnt = 1;                    // Local Variable

    if(iCnt <=4)                            // Business Logic
    {
        cout << "Jay Ganesh...." << endl;
        iCnt++;

        Display();                          // Recursive call
    }
}

int main()                                  // Main Method
{
    Display();                              // Function call

    return 0;
}